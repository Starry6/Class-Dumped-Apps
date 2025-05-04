@interface AWEGrouponTaskStateManager : NSObject
@property (nonatomic) NSMutableDictionary componentStateMap;
@property (nonatomic) q coldStartShowCount;
@property (nonatomic) NSDictionary componentStateDict;
- (void)onShowComponentWithType:componentID:coldStartLimited:;
- (void)onHideComponentWithType:componentID:;
- (BOOL)isColdStartShowLimited;
- (long long)coldLaunchFrequency;
- (BOOL)requestComponentShowWithType:componentID:coldStartLimited:;
- (BOOL)canShowComponentWithType:componentID:;
- (id)getSupportType;
- (id)componentStateDict;
- (long long)coldStartShowCount;
- (BOOL)canShowComponentWithType:componentID:requestShow:;
- (id)componentStateMap;
- (id)getAvoidRuleByType:;
- (void)setColdStartShowCount:;
- (void)setComponentStateMap:;
- (void).cxx_destruct;
@end
