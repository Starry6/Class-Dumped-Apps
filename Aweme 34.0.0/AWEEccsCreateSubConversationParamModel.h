@interface AWEEccsCreateSubConversationParamModel : IESLiveBridgeModel
@property (nonatomic) NSString parentConversationShortID;
@property (nonatomic) NSString parentConversationID;
@property (nonatomic) NSNumber inbox;
@property (nonatomic) NSArray participantsObjects;
- (id)parentConversationShortID;
- (void)setParentConversationShortID:;
- (id)parentConversationID;
- (void)setParentConversationID:;
- (id)participantsObjects;
- (void)setParticipantsObjects:;
- (void).cxx_destruct;
- (id)inbox;
- (void)setInbox:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
