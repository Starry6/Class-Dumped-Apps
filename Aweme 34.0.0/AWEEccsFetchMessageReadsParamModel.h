@interface AWEEccsFetchMessageReadsParamModel : IESLiveBridgeModel
@property (nonatomic) NSArray conversationIDs;
@property (nonatomic) NSArray conversationShortIDs;
@property (nonatomic) NSArray arrWhichUserIDs;
@property (nonatomic) NSNumber inbox;
- (id)conversationShortIDs;
- (void)setConversationShortIDs:;
- (id)arrWhichUserIDs;
- (void)setArrWhichUserIDs:;
- (void).cxx_destruct;
- (id)inbox;
- (void)setInbox:;
- (id)conversationIDs;
- (void)setConversationIDs:;
+ (id)modelCustomPropertyMapper;
@end
