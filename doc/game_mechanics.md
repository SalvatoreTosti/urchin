#Outline of Game mechanics:  

##Units:  
* Light infantry  
  - Rifleman  
  - Sniper  

* Heavy infantry  
  - Anti-tank(Bazooka)  
  - Machine gunner  
  - Anti-tank Rifleman  

* Tanks  
  - Light  
  - Heavy  

* Artillery  
  - Towed  

* Armor vehicles  
  - Halftrack  
  - Scout car  

* Light vehicles  
  - Jeep  
  - Motorbike  

##Combat:  
###Pseudocode:
````
void combatDamage(unit atk, unit def)
	totalAttack = calcCurrAttack(atk);  
	totalAttack = (totalAttack * def.susceptability);   
	totalAttack = totalAttack * damageRange(atk);  
	totalAttack = totalAttack - (totalAttack * def.defense);  
	atk.hp = atk.hp - totalAttack;  
````
````	
int damageRange(unit atk, unit def)  
	return randomBetween(atk.lowDamageRange,hiDamageRange)  
````
````	
int calcCurrAttack(unit atk)  
	return healthPercent(atk) * atk.attack;  
````
    ####Health:  
    Health is an integer which holds current hp.  
	Percent HP will be calculated off this and the total hp of a unit.  
    ####Attack:  
    

    susc. *1.5  
    opp. atk: 10  
        15  
    def: 25% reduction in incoming damage  
        
    hp 100 points
