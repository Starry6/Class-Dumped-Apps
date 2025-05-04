@interface AWEIMMessageDegradationManager : NSObject
@property (nonatomic) NSDictionary degradationConfig;
@property (nonatomic) BOOL hasConfig;
@property (nonatomic) BOOL disableExtRule;
- (BOOL)p_hasConfig;
- (id)degradationConfig;
- (BOOL)disableExtRule;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (BOOL)hasConfig;
+ (id)degradationWithTTMsg:;
+ (BOOL)p_shouldCheckMessageExtDegradation;
+ (long long)p_appVersionCode;
+ (id)p_aweTypeConfigWithMsgType:aweType:;
+ (id)p_defaultConfig;
+ (BOOL)p_shouldCheckMessageDegradation;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
