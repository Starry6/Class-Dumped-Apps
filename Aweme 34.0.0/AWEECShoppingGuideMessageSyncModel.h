@interface AWEECShoppingGuideMessageSyncModel : MTLModel
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString searchResultType;
@property (nonatomic) NSString searchResultForm;
@property (nonatomic) NSString strategyType;
@property (nonatomic) NSString conversationId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStrategyType:;
- (id)strategyType;
- (void)setSearchResultForm:;
- (id)searchResultForm;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
- (id)searchResultType;
- (void)setSearchResultType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
