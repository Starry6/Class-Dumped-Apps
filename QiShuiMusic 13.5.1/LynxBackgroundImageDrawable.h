@interface LynxBackgroundImageDrawable : LynxBackgroundDrawable
@property (nonatomic) Q currentFrame;
@property (nonatomic) ^Q stepArray;
@property (nonatomic) Q currentStepIndex;
@property (nonatomic) NSURL url;
@property (nonatomic) UIImage image;
- (void)drawInContext:borderRect:paddingRect:contentRect:;
- (void)generateStepArrayWithFPS:andTargetFPS:;
- (double)getImageHeight;
- (double)getImageWidth;
- (id)illegalUrlHandler:;
- (void)onDraw:rect:;
- (void)setStepArray:;
- (id)stepArray;
- (id)url;
- (void)dealloc;
- (id)initWithURL:;
- (id)initWithString:;
- (BOOL)isReady;
- (void)setImage:;
- (void)setUrl:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)image;
- (unsigned long long)currentFrame;
- (unsigned long long)nextStep;
- (void)setCurrentStepIndex:;
- (unsigned long long)currentStepIndex;
- (void)setCurrentFrame:;
@end
