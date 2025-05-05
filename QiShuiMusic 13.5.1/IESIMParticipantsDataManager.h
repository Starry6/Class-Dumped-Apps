@interface IESIMParticipantsDataManager : NSObject
@property (nonatomic) IESSaaSTIMOParticipantsInConversationDataSource dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSArray participants;
@property (nonatomic) NSArray admins;
@property (nonatomic) <IESIMParticipantsDataManagerDelegate> delegate;
- (id)admins;
- (id)initWithConversationId:;
- (id)participantForUserId:;
- (void)participantsDataSourceDidUpdate:;
- (void)reloadParticipant;
- (void)setDataSource:;
- (id)participants;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
@end
