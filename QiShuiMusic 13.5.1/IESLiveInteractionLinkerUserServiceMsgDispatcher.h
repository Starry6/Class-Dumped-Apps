@interface IESLiveInteractionLinkerUserServiceMsgDispatcher : NSObject
@property (nonatomic) <IESLiveInteractiveUserServiceMsgDispatcherDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onReceivedCloseMessage:;
- (void)onReceivedCreateMessage:;
- (void)onReceivedCrossRoomUpdateMessage:;
- (void)onReceivedLinkEnterMessage:;
- (void)onReceivedLinkLeaveMessage:;
- (void)onReceivedLinkUpdateUserMessage:;
- (void)onReceivedLinkWatingListChangeMessage:;
- (void)onReceivedLinkedListChangeMessage:;
- (void)onReceivedWatingListChangeMessage:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
