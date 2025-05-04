@interface AWEMVChannelDataUtils : NSObject
@property (nonatomic) NSMutableSet itemIDs;
@property (nonatomic) NSMutableSet mixIDs;
- (void)clearDeduplicateSet;
- (id)filterInvalidAwemeType:shouldSkipFilter:context:;
- (id)filterDuplicateAwemeModels:shouldSkipFilter:context:;
- (id)filterDuplicateMixModels:context:;
- (id)mixIDs;
- (void)setMixIDs:;
- (void).cxx_destruct;
- (id)itemIDs;
- (void)setItemIDs:;
+ (void)removeRecordedItemID:;
+ (unsigned long long)convertToPullType:;
+ (unsigned long long)convertRefreshType:;
+ (void)clearDeduplicateSet;
+ (unsigned long long)convertPullTypeByUsageType:;
+ (unsigned long long)convertPullTypeByRefreshType:;
+ (id)filterInvalidAwemeType:shouldSkipFilter:context:;
+ (id)filterDuplicateAwemeModels:shouldSkipFilter:context:;
+ (id)filterDuplicateMixModels:context:;
+ (id)filterInvalidAwemeType:context:;
+ (id)filterDuplicateAwemeModels:context:;
+ (id)sharedInstance;
@end
