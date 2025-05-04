@interface AWENearbyEventTrackVerifyDataModel : NSObject
@property (nonatomic) NSArray originVerifyRuleArray;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSArray verifyRulerGroup;
- (void)setVerifyRulerGroup:;
- (void)setOriginVerifyRuleArray:;
- (void)handleVerifyRuleArray;
- (id)originVerifyRuleArray;
- (id)initWithRuleGroup:eventName:;
- (id)verifyRulerGroup;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
@end
