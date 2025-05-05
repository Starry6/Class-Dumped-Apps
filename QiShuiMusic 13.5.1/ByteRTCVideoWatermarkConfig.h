@interface ByteRTCVideoWatermarkConfig : NSObject
@property (nonatomic) BOOL visibleInPreview;
@property (nonatomic) ByteRTCVideoByteWatermark positionInLandscapeMode;
@property (nonatomic) ByteRTCVideoByteWatermark positionInPortraitMode;
- (BOOL)visibleInPreview;
- (void)setVisibleInPreview:;
- (id)positionInLandscapeMode;
- (void)setPositionInLandscapeMode:;
- (id)positionInPortraitMode;
- (void)setPositionInPortraitMode:;
- (void).cxx_destruct;
@end
