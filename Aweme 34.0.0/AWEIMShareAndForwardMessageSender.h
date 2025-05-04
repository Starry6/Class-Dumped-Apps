@interface AWEIMShareAndForwardMessageSender : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendMessageToShareList:text:shareImpl:createGroup:createGroupTrackExtra:completion:;
- (void)sendMessageToShareList:text:shareImpl:createGroup:completion:;
- (void)createGroupWithShareList:completion:;
- (void)createGroupWithShareList:trackExtra:completion:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)p_getNameListFromShareList:;
+ (void)sendMessageToShareList:text:shareImpl:completion:;
+ (id)serialSendQueue;
+ (void)p_sendMessageToShareList:text:multiShareImps:completion:;
+ (void)p_sendMessageToShareList:text:shareImpl:isLastSend:completion:;
+ (id)attachmentsInContext:;
+ (void)p_sendMessageToShareList:containers:isReusedMsg:shareImpl:isLastTarget:isLastSend:conversationID:messageID:completion:;
+ (void)messageContainerWithShareList:text:attachmentObject:shareImpl:completion:;
+ (id)messageContainerWithShareList:message:text:shareImpl:isLastTarget:;
+ (void)p_sendMessageToShareList:containers:isReusedMsg:shareImpl:isLastTarget:isLastSend:completion:;
+ (void)p_uploadImageAndGetUrl:completion:;
+ (void)sendAttachmentMessage:conversationID:completion:;
+ (void)p_sendMessageCompletedToShareList:containers:shareImpl:messageDict:;
+ (BOOL)p_shouldHideCustomToastWithContext:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
