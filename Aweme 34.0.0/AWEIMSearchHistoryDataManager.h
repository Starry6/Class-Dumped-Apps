@interface AWEIMSearchHistoryDataManager : NSObject
- (void)recordHistory:;
- (id)historyStorageModelList;
- (void)cleanHistory;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
