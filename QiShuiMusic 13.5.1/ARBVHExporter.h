@interface ARBVHExporter : NSObject
@property (nonatomic) BOOL running;
- (void)start;
- (BOOL)running;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithFilePath:type:scale:;
- (void)appendBodyAnchor:;
+ (id)headerByApplyingScale:;
+ (id)liftedSkeletonHeaderByApplyingScale:;
+ (id)stickFigureHeaderByApplyingScale:;
@end
