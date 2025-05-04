@interface AWEIMXBridgeSendEncryptedImageMessageMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (long long)authType;
- (id)methodName;
+ (void)p_sendMessageWithType:uid:secUID:cid:msg:paramModel:completion:;
+ (void)__showSnackBarWithUserID:conversationID:chatType:bottomOffsetNum:logExtra:;
+ (void)__showSendMessageSuccessSnackBarForShareModel:bottomOffset:logExtra:;
+ (void)__transferToMessageVCWithUid:shareModel:extraParams:;
+ (void)__transferToMessageVCWithCid:shareModel:extraParams:;
+ (id)metaInfo;
@end
