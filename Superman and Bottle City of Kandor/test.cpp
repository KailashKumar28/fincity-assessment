// Kailash Kumar


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<vector<float>>> data;
    int n;   
    // cout << "Please incert the number of solar systems in the problem : ";                               // number of solar systems 
    cin >> n;
    for(int i = 0; i < n; i++){
        int s;                               // number of stars in a solar system
        // cout << "Incert the number of stars in " << i+1 << "th solar system";
        cin >> s;
        vector<vector<float>>temp1;
        for(int  j = 0; j < s; j++){
            vector<float> temp2;
            float output, distance;
            // cout << "Incert the output and distance for star number " << s+1 << " for solar system " << i+1 << ": ";
            cin >> output >> distance;
            temp2.push_back(output);
            temp2.push_back(distance);
            temp1.push_back(temp2);
        }
        data.push_back(temp1);
    }
    float en1,en2;
    cin >> en1 >> en2;                // energy range input for range suitable for people of kandor to live
    
 
    // now calculating system output for the planet in everysolar system and
    // if none of those fits in the range than returning -1; otherwise returning index of the solar system;
    
    vector<int> Possible_systems;       //here will be index of solar systems in which kandor people can live 
    for(int i = 0; i < n; i++){
        
        int ans = -1;
        int m = data[i].size();
        float energy = 0;                   // this will be the energy output for planet in a solar system
        for(int j = 0; j < m; j++){
            energy += data[i][j][0]/data[i][j][1];
        }
        if(energy >= en1 && energy <= en2){
            ans = i;
            Possible_systems.push_back(ans);
        }
    }
    
    
    // printing the results
    for(int i = 0; i < Possible_systems.size(); i++){
        cout << Possible_systems[i] << " " ;
    }cout << endl;
}