@interface AWEStickerApplyHandlerMessageHelper : NSObject
+ (void)send0X29MessageToEffectWithDict:arg2:cameraService:logTag:;
+ (void)sendMessageToEffectWithMsgId:arg1:arg2:arg3:cameraService:logTag:;
+ (void)receiveEffectCaptureImage:cameraService:handleImageBlock:;
@end
