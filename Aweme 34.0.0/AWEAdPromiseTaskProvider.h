@interface AWEAdPromiseTaskProvider : NSObject
+ (id)openWechatByOpenSDKTask;
+ (id)generateOtherAppTaskPack:;
+ (id)nativeEnterLiveRoomTask;
+ (id)taskForType:;
+ (id)openURLTask;
+ (id)asyncTaskForType:;
@end
