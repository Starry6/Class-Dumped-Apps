@interface LSFPushVideoFrameCacheNode : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBufferRef;
@property (nonatomic) {?=qiIq} pts;
@property (nonatomic) NSInteger layerId;
@property (nonatomic) BOOL needRender;
@property (nonatomic) BOOL useAlpha;
@property (nonatomic) BOOL isMasterLayer;
@property (nonatomic) BOOL isCameraLayer;
@property (nonatomic) NSDictionary info;
- (BOOL)isCameraLayer;
- (BOOL)isMasterLayer;
- (BOOL)needRender;
- (void)setIsCameraLayer:;
- (void)setIsMasterLayer:;
- (void)setNeedRender:;
- (void)setUseAlpha:;
- (BOOL)useAlpha;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)info;
- (id)pts;
- (int)layerId;
- (void)setLayerId:;
- (id)pixelBufferRef;
- (void)setPixelBufferRef:;
- (void)setPts:;
@end
