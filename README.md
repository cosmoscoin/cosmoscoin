[ANN][CMC]CosmosCoin-PoW/PoS |Transaction Comment|Fair start|0 Premine


https://raw.github.com/cosmoscoin/cosmoscoin/master/src/qt/res/icons/cosmoscoin.png

[Announcing CosmosCoin - CMC, the latest and most innovative PoW/PoS coin! Fair start and zero premined![/font][/size]
[font=Garamond][size=15pt]
Cosmoscoin combines the best from Bitcoin/Litecoin/Novacoin/Florincoin, it uses both Proof of Work and Proof of Stake. This provides good resistence to 51% attack. It also supports transaction comments like Florincoin, so when you send transactions to the cosmos, you and your receiver won't be lost! Moreover, this coin has very low transaction fees (only 0.1% of most other coins), and fast transaction confirmation time (1.5 min). It provides steady coin supply at 3.5 coins per block.

Cosmoscoin has a fair start and zero premined, making it one of the very best of the alt coins exist today.


Features:

- Proof of Work Combined with Proof of Stake
- Transacation Comment like FlorinCoin
- Low Transaction Fee (Min Fee is 0.00001 Coins)
- Quick Confirmation fro Transaction
- Resistence to 51% attack
- Stable Reward Per Block (with the total number of 1 billion and reward 3.5 coins per block, the generation of cosmoscoin is stable during more than 270 years)


Specifications:

- Proof of work/proof of stake 
- Scrypt
- 30 seconds block time
- 3.5 coins per block
- Day generation: 10080 coins or 2880 blocks
- 480 blocks retarget (4 hours)
- Trade confirm: 3
- Mine confirm: 30
- Total number of coins 1000000000 (1 billion) 
- fair start, no premine
- port: Connection: 19990 and RPC Port:19991 


Download:

Windows Client Download:
Mega.co.nz:
.7z file: https://mega.co.nz/#!ZUkTwQqS!CpvkPyK770Js6u0JQpk301N9kDohtoM0R_8b4TO0oEo
setup.exe: https://mega.co.nz/#!8c1mxShJ!G3GpcDi37PU9CpECaUtUtVpdCZY6u8qmQfNtwiiYNYE


Skydrive:
.7z file: http://sdrv.ms/17IHPFA
setup.exe: http://sdrv.ms/17IHRNU


Source Code Download:
https://github.com/cosmoscoin/cosmoscoin


Website:
- to be added -

Blockchain Explorer:
- to be added -


Sample CosmosCoin.conf:

[code]listen=1
daemon=1
server=1
rpcuser=**Yourusername**
rpcpassword=**Yourpassword**
rpcport=19991
rpcconnect=127.0.0.1
addnode=198.211.17.160
addnode=173.254.207.107
addnode=118.250.247.107[/code]



Getting Started:

1. Start up cosmoscoin-qt, wait for it to load, then exit.
2. Put cosmoscoin.conf (see sample file above) in your c:/users/**yourcomputername**/Appdata/Roaming/CosmosCoin
3. restart cosmoscoin-qt, and you should connect and sync.
4. For solo mining, launch cgminer or the mining program you use and begin mining.
      cgminer ex: cgminer.exe --scrypt -o localhost:19991 -u **yourusername** -p **password** (without **)
