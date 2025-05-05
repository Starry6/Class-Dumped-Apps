@interface IESSaaSTIMPBResponseLongConnectionCallback : IESSaaSTIMLongConnectionCallback
- (void)listenConversationInfoUpdatedNotify;
- (void)listenMarkAsReadNotify;
- (void)listenNewMessageNotify;
- (void)listenNewP2PMessageNotify;
- (void)listenStrangerNewMessageNotify;
- (id)init;
+ (id)callbackWithSuccessBlock:failureBlock:;
+ (id)filterWithPBCMDType:;
+ (id)callbackQueue;
@end
