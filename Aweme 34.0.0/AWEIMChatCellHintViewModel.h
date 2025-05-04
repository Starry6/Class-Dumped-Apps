@interface AWEIMChatCellHintViewModel : NSObject
@property (nonatomic) NSDictionary hintsDict;
@property (nonatomic) AWEIMChatCellHintModel preferredHintModel;
@property (nonatomic) NSArray hintTypesOrderedInPriority;
@property (nonatomic) NSString conversationId;
- (id)cachedHintModelForType:;
- (id)preferredHintModel;
- (void)didChangeMessageTabMode:;
- (id)hintsDict;
- (void)p_processHighlightHintModelContent:;
- (void)setHintsDict:;
- (void)p_updateLatestHintModelForPreferredHintModel:;
- (void)__updatePreferredHintModel;
- (id)hintTypesOrderedInPriority;
- (BOOL)__isDisplayableHintModel:;
- (void)setPreferredHintModel:;
- (id)initWithConversationId:sortedPriorities:;
- (void)updateHint:;
- (void)setHintTypesOrderedInPriority:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
@end
