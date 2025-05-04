@interface AWEIMMixPhotoCameraManager : NSObject
@property (nonatomic) NSMutableArray dismissCallbacks;
@property (nonatomic) NSLock dismissCallbacksLock;
- (id)p_trackParamCharTypeFromChatType:;
- (void)p_trackCameraShowWithContext:;
- (id)p_trackExtForFaceDetectWithContext:;
- (id)p_trackExtForCameraWithContext:;
- (void)p_onAnyIMCameraDealloc;
- (id)p_repoModelWithShowContext:onSubmit:;
- (void)p_addDismissCallback:;
- (unsigned long long)p_publishTypeFormActionType:;
- (id)p_dyncmicDocDict;
- (void)p_dismissFired;
- (id)dismissCallbacksLock;
- (id)dismissCallbacks;
- (void)showIMCameraForMixPhotoWithContext:onSubmit:onCompletion:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
