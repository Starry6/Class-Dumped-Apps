@interface FigScreenCaptureController : NSObject
@property (nonatomic) ^{OpaqueFigVirtualDisplaySession=} session;
@property (nonatomic) ^{OpaqueFigSimpleMutex=} lock;
@property (nonatomic) ^{__CFDictionary=} options;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {?=qiIq} minIntervalBetweenFrames;
@property (nonatomic) <FigScreenCaptureFrameHandlerDelegate> delegate;
- (void)setOptions:;
- (void)setSession:;
- (void)stopCapture;
- (void)dealloc;
- (void)setDelegate:;
- (id)lock;
- (id)options;
- (id)delegate;
- (id)session;
- (void).cxx_destruct;
- (void)setLock:;
- (id)size;
- (void)startCapture;
- (id)initWithSize:minIntervalBetweenFrames:;
- (id)initWithFigVirtualDisplayOptions:;
- (void)setFigVirtualDisplayOption:forKey:;
- (id)minIntervalBetweenFrames;
- (void)suspendCapture;
- (void)resumeCapture;
+ (id)screenCaptureControllerWithSize:minIntervalBetweenFrames:;
+ (id)screenCaptureControllerWithFigVirtualDisplayOptions:;
@end
