@interface AVCapturePrepareBracketRequest : NSObject
@property (nonatomic) FigCaptureStillImageSettings settings;
@property (nonatomic) @? completionBlock;
- (void)dealloc;
- (id)settings;
- (id)completionBlock;
- (id)_initWithCompletionBlock:settings:;
+ (id)prepareBracketRequestWithCompletionBlock:settings:;
@end
