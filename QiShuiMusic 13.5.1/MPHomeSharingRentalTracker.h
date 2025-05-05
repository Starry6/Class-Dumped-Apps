@interface MPHomeSharingRentalTracker : NSObject
- (void).cxx_destruct;
- (id)_init;
- (void)addRentalWithItemID:databaseID:;
- (void)removeRentalWithItemID:;
- (void)removeAllRentalsForDatabaseID:;
- (void)_saveRentals;
+ (id)sharedInstance;
@end
