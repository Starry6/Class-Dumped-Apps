@interface IMCoreSpotlightUtilities : NSObject
+ (id)descriptionForReindexReason:;
+ (BOOL)needsIndexing;
+ (BOOL)verboseLoggingEnabled;
+ (BOOL)needsDonation;
+ (BOOL)needsInitialDonation;
+ (void)setNeedsInitialDonation:;
+ (BOOL)needsDeferredIndexing;
+ (void)setNeedsDeferredIndexing;
+ (unsigned long long)lastIndexedRowID;
+ (unsigned long long)lastDonatedRowID;
+ (unsigned long long)currentIndexVersion;
+ (unsigned long long)expectedIndexVersion;
+ (id)currentIndexProductVersion;
+ (id)expectedIndexProductVersion;
+ (unsigned long long)messageIndexBatchSize:;
+ (BOOL)bypassIndexVersionCheck;
@end
