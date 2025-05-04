@interface AWEPigeonSendGameInvitationImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jsonStringForError:;
- (void)callMethod:arguments:completion:;
- (void)sendGameInvitationWithOpenId:clientKey:gameName:coverImg:schema:linkId:shareVersion:conversationId:extra:imCardData:completion:;
- (void)errorCallbackWithCompletion:;
- (void)sendGameInvitationToPrivateChatWithOpenId:clientKey:gameName:coverImg:schema:linkId:shareVersion:extra:imCardData:completion:;
- (void)sendGameInvitationToGroupChatWithGameName:coverImg:schema:linkId:shareVersion:conversationId:extra:imCardData:completion:;
+ (id)pigeonMethodName;
+ (id)create;
@end
