@interface WechatShareUrlCheckConfig : NSObject
@property (nonatomic) I state;
@property (nonatomic) NSString appidInRule;
@property (nonatomic) NSArray urlRuleList;
@property (nonatomic) Q userWaitTime;
@property (nonatomic) Q nextRequestInterval;
@property (nonatomic) NSString buffer;
- (void)setAppidInRule:;
- (void)setUrlRuleList:;
- (id)appidInRule;
- (id)genDictionaryToSave;
- (id)initWithParamDictionary:;
- (unsigned long long)nextRequestInterval;
- (void)setNextRequestInterval:;
- (void)setUserWaitTime:;
- (id)urlRuleList;
- (unsigned long long)userWaitTime;
- (void)setBuffer:;
- (id)buffer;
- (void)setState:;
- (unsigned int)state;
- (void).cxx_destruct;
@end
