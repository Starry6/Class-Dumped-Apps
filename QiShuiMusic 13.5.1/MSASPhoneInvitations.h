@interface MSASPhoneInvitations : NSObject
@property (nonatomic) MSASStateMachine stateMachine;
@property (nonatomic) MSASAlbum album;
@property (nonatomic) IDSService idsService;
@property (nonatomic) NSMutableDictionary sendMessageIdentifierToPhone;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAlbum:;
- (id)init;
- (void)service:account:identifier:didSendWithSuccess:error:;
- (id)album;
- (id)idsService;
- (id)stateMachine;
- (void)setIdsService:;
- (void)setStateMachine:;
- (void).cxx_destruct;
- (void)addPendingPhoneInvitations:toOwnedAlbum:inStateMachin:;
- (void)removeSharingRelationships:forAlbum:;
- (id)sendMessageIdentifierToPhone;
- (void)setSendMessageIdentifierToPhone:;
@end
