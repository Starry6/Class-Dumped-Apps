@interface AWEPlayInteractionComponentGlobalPriorityConfigManager : NSObject
@property (nonatomic) q scope;
@property (nonatomic) q componentAvoidNumThreshold;
@property (nonatomic) NSArray supportTypeList;
- (void)setComponentAvoidNumThreshold:;
- (id)supportTypeList;
- (BOOL)enableGlobalPriorityAvoidWithReferString:;
- (BOOL)enableGlobalPriorityAvoidWithModel:;
- (long long)componentAvoidNumThreshold;
- (void)setSupportTypeList:;
- (long long)scope;
- (void).cxx_destruct;
- (void)setScope:;
+ (id)sharedManager;
@end
