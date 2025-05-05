@interface IESECBSTContextV2 : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSString btm;
@property (nonatomic) NSString event;
@property (nonatomic) NSString ruleKey;
@property (nonatomic) @? reporter;
@property (nonatomic) @ uniqueKey;
@property (nonatomic) @ uniqueContainer;
- (id)btm;
- (id)uniqueContainer;
- (id)ruleKey;
- (void)setBtm:;
- (void)setRuleKey:;
- (void)setUniqueContainer:;
- (id)uniqueKey;
- (void)setEvent:;
- (id)event;
- (void)setReporter:;
- (id)view;
- (void).cxx_destruct;
- (id)reporter;
- (void)setView:;
- (void)setUniqueKey:;
+ (id)contextWithView:btm:eventName:uniqueContainer:uniqueKey:ruleKey:reporter:;
@end
