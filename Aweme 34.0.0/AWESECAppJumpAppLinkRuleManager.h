@interface AWESECAppJumpAppLinkRuleManager : NSObject
@property (nonatomic) NSDictionary appLinkRuleDict;
- (BOOL)resourceAvailable;
- (void)loadResource;
- (BOOL)isAppLink:;
- (void)parseDataToRuleDict:error:;
- (BOOL)isURL:fitsSingleRuleGroup:cache:;
- (long long)isURL:fitsRule:cache:;
- (id)appLinkRuleDict;
- (void)setAppLinkRuleDict:;
- (id)init;
- (void)dealloc;
- (id)channel;
- (id)path;
- (void).cxx_destruct;
- (id)accessKey;
+ (id)shared;
@end
