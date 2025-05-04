@interface AWEIMMessageSendHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWebMessageToChatWithParams:completionBlock:;
- (void)sendMessageWithParams:completion:;
- (void)sendPhotoRecordFinishedWithInfo:completion:;
- (void)sendVideoRecordFinishedWithInfo:completion:;
- (id)createMessageByJSBParams:;
- (id)mentionedUserAttributedStringWithUser:conversationID:range:rawAttributedString:;
- (id)containersWithShareModel:messagesCreater:customContainer:;
- (void)saveLastShareWithContainer:;
- (void)sendFeedQuoteReplyMessageWithContent:awemeModel:referMessage:trackInfo:completion:;
- (id)p_taskOfMessageWithJSBParams:;
- (void)p_sendMessageWithType:uid:secUID:cid:msg:extraInfo:completion:;
- (id)p_allowedDictionaryForJSBMessageTypeWithParams:;
- (id)p_messageCreatedWithClass:messageType:params:;
- (id)p_detailErrorMessageWithType:;
- (id)p_checkSourceValidWithParams:;
- (void)p_showSnackBarWithUserID:conversationID:chatType:;
- (void)p_showSendMessageSuccessSnackBarForShareModel:;
- (void)p_transferToMessageVCWithUid:shareModel:extraParams:;
- (void)p_transferToMessageVCWithCid:shareModel:extraParams:;
+ (id)sharedInstance;
@end
