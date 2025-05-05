@interface LSDatabaseBuilder : NSObject
- (void).cxx_destruct;
- (id)initWithIOQueue:;
- (void)seedCryptexContentIfNeeded:;
- (void)createAndSeedLocalDatabase:;
- (void)syncWithMI:;
- (void)setSeedingComplete:;
@end
