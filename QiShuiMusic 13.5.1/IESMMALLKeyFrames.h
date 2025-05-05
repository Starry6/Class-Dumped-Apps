@interface IESMMALLKeyFrames : NSObject
@property (nonatomic) NSMutableDictionary allCanvasKeyFrames;
@property (nonatomic) NSMutableDictionary allFeatureKeyFrames;
@property (nonatomic) NSMutableDictionary allInfoStickerKeyFrames;
@property (nonatomic) BOOL iskeyframeExists;
- (id)allCanvasKeyFrames;
- (id)allFeatureKeyFrames;
- (id)allInfoStickerKeyFrames;
- (BOOL)iskeyframeExists;
- (void)setAllCanvasKeyFrames:;
- (void)setAllFeatureKeyFrames:;
- (void)setAllInfoStickerKeyFrames:;
- (void)setIskeyframeExists:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
