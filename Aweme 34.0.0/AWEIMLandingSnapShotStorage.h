@interface AWEIMLandingSnapShotStorage : NSObject
@property (nonatomic) NSArray snapShotModelList;
- (id)snapShotModelList;
- (void)setSnapShotModelList:;
- (long long)cacheChatCountWithHeaderHeight:;
- (BOOL)p_enableSnapShotForChat:;
- (void)storeChatList:withHeaderHeight:withListViewModel:;
- (void)clear;
- (void).cxx_destruct;
+ (id)storageKey:;
+ (id)shared;
@end
