@interface AMSStorageDataMigrator : NSObject
+ (void)migrateStorageToDefaultsForNonAMSInternal:;
+ (void)_migrateDeviceOfferEligibilityWithDatabase:;
+ (void)_migrateSharedStoreReviewWithDatabase:;
@end
