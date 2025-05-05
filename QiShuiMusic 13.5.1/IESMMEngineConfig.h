@interface IESMMEngineConfig : NSObject
@property (nonatomic) BOOL useAmazingEngine;
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) BOOL customStikcerLayer;
@property (nonatomic) BOOL infostickerTextureRelease;
- (BOOL)customStikcerLayer;
- (BOOL)infostickerTextureRelease;
- (void)setCustomStikcerLayer:;
- (void)setInfostickerTextureRelease:;
- (void)setUseAmazingEngine:;
- (BOOL)useAmazingEngine;
- (id)videoSize;
- (void)setVideoSize:;
@end
