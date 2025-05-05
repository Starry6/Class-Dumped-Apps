@interface TTAVAssetExportSession : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) @? progressBlock;
@property (nonatomic) <TTAVAssetExportSessionable> session;
- (void)onDisplayLink;
- (void)start:completion:;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)progressBlock;
- (void)setSession:;
- (void)cancel;
- (void)setProgressBlock:;
- (id)session;
- (void).cxx_destruct;
- (id)initWith:;
@end
