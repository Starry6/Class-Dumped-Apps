@interface IESSaaSTIMOParticipantsInConversationDataSource : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSArray participants;
@property (nonatomic) NSArray admParticipants;
@property (nonatomic) <IESSaaSTIMOParticipantsInConversationDataSourceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)admParticipants;
- (void)fetchAllAdministrator;
- (void)fetchParticipantsAlias:secParticipants:completion:;
- (void)onParticipantsInConversationChanged:;
- (void)setAdmParticipants:;
- (id)init;
- (id)participants;
- (void)setParticipants:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:;
- (id)initWithConversationID:;
@end
