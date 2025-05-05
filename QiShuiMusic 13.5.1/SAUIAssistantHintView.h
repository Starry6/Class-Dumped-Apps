@interface SAUIAssistantHintView : SAUIAssistantUtteranceView
@property (nonatomic) NSArray commands;
@property (nonatomic) NSArray regions;
- (id)regions;
- (id)groupIdentifier;
- (id)commands;
- (void)setRegions:;
- (id)encodedClassName;
- (void)setCommands:;
+ (id)assistantHintView;
+ (id)assistantHintViewWithDictionary:context:;
@end
