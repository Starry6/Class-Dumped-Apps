@interface AVCaptureStillImageRequest : NSObject
@property (nonatomic) @? sbufCompletionBlock;
@property (nonatomic) @? iosurfaceCompletionBlock;
@property (nonatomic) @? bracketedCaptureCompletionBlock;
@property (nonatomic) q settingsID;
@property (nonatomic) I shutterSoundID;
@property (nonatomic) AVCaptureBracketedStillImageSettings bracketedSettings;
- (void)dealloc;
- (void)setSettingsID:;
- (long long)settingsID;
- (id)bracketedSettings;
- (id)sbufCompletionBlock;
- (void)setSbufCompletionBlock:;
- (id)iosurfaceCompletionBlock;
- (void)setIosurfaceCompletionBlock:;
- (id)bracketedCaptureCompletionBlock;
- (void)setBracketedCaptureCompletionBlock:;
- (unsigned int)shutterSoundID;
- (void)setShutterSoundID:;
- (void)setBracketedSettings:;
+ (id)request;
@end
