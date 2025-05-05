@interface IESLiveSaaSRecoderTTVideoEditor : NSObject
@property (nonatomic) {?={CGSize=dd}Q} videoConfig;
@property (nonatomic) q status;
@property (nonatomic) q currentCameraPosition;
@property (nonatomic) q cameraFlashMode;
@property (nonatomic) BOOL ignoreNotification;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) NSString currentSessionPreset;
@property (nonatomic) Q preferedFrameRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVideoConfig:;
- (id)videoConfig;
@end
