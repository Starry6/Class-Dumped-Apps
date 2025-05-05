@interface GIFBuilder : NSObject
@property (nonatomic) CIContext ciCtx;
@property (nonatomic) NSDictionary frameProperties;
@property (nonatomic) ^{CGImageDestination=} imgDest;
@property (nonatomic) double maxRes;
- (void)dealloc;
- (BOOL)finish;
- (void).cxx_destruct;
- (BOOL)addImage:;
- (id)initWithContext:forURL:maxRes:fps:;
- (id)ciCtx;
- (void)setCiCtx:;
- (id)frameProperties;
- (void)setFrameProperties:;
- (id)imgDest;
- (void)setImgDest:;
- (double)maxRes;
- (void)setMaxRes:;
+ (id)builderWithContext:forURL:maxRes:fps:;
@end
