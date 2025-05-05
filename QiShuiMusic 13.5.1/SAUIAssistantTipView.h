@interface SAUIAssistantTipView : SAUIAssistantUtteranceView
@property (nonatomic) NSString flowIdentifier;
@property (nonatomic) NSString tipPrefix;
- (id)groupIdentifier;
- (id)flowIdentifier;
- (id)encodedClassName;
- (void)setFlowIdentifier:;
- (id)tipPrefix;
- (void)setTipPrefix:;
+ (id)assistantTipView;
+ (id)assistantTipViewWithDictionary:context:;
@end
