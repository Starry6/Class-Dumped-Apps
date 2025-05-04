@interface AWEOnlineABTestManager : NSObject
@property (nonatomic) NSDictionary abTestData;
- (id)abTestData;
- (id)onlineDataWithABTestInfoModel:;
- (id)onlineDataWithPropertyName:;
- (id)init;
+ (id)sharedManager;
@end
