@interface LSLayerInfoUpdateTask : NSObject
@property (nonatomic) {ILayerInfo=ii{ILayerRect=ffff}iBif} srcInfo;
@property (nonatomic) {ILayerInfo=ii{ILayerRect=ffff}iBif} dstInfo;
@property (nonatomic) {ILayerInfo=ii{ILayerRect=ffff}iBif} curInfo;
@property (nonatomic) NSInteger frames;
@property (nonatomic) {ILayerInfo=ii{ILayerRect=ffff}iBif} pace;
- (id)curInfo;
- (id)srcInfo;
- (id)dstInfo;
- (id)initWithSrcInfo:dstInfo:frames:;
- (id)getUpdatedInfo;
- (void)setCurInfo:;
- (void)setDstInfo:;
- (void)setSrcInfo:;
- (int)frames;
- (void)setFrames:;
- (id)pace;
- (void)setPace:;
- (BOOL)shouldUpdate;
@end
