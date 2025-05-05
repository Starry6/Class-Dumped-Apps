@interface AWEIMShareAndForwardMessageSender : NSObject
+ (id)serialSendQueue;
+ (id)attachmentsInContext:;
+ (void)createGroupWithShareList:completion:;
+ (id)messageContainerWithShareList:message:text:shareImpl:isLastTarget:;
+ (void)messageContainerWithShareList:text:attachmentObject:shareImpl:completion:;
+ (void)p_sendMessageCompletedToShareList:containers:shareImpl:;
+ (void)p_sendMessageToShareList:containers:isReusedMsg:shareImpl:isLastTarget:isLastSend:completion:;
+ (void)p_sendMessageToShareList:text:multiShareImps:completion:;
+ (void)p_sendMessageToShareList:text:shareImpl:isLastSend:completion:;
+ (void)sendAttachmentMessage:conversationID:completion:;
+ (void)sendMessageToShareList:text:shareImpl:completion:;
+ (void)sendMessageToShareList:text:shareImpl:createGroup:completion:;
@end
