@interface AWESearchVerticalPreRequestCenter : NSObject
@property (nonatomic) NSMutableDictionary managerMap;
- (id)responseClassNameFromType:;
- (id)managerMap;
- (id)responseCardDataKeyFromType:;
- (void)cleanPreRequestManagers;
- (void)setManagerMap:;
- (id)fetchPreRequestManagerWithType:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
