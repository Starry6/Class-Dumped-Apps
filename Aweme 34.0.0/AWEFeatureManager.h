@interface AWEFeatureManager : NSObject
@property (nonatomic) NSDictionary localKeyConfigureDict;
- (void)loadLocalKeyConfigure;
- (void)setLocalKeyConfigureDict:;
- (id)localKeyConfigureDict;
- (BOOL)debug_getFeatureFlagBoolValue:;
- (BOOL)getFeatureFlagBoolValue:;
- (void).cxx_destruct;
+ (BOOL)isFeatureFlagEnable:;
+ (BOOL)internalGetFeatureFlagBoolValue:;
+ (id)sharedSingleton;
@end
