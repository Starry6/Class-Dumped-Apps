@interface VEInfoStickerData : NSObject
@property (nonatomic) NSMutableArray infoStickers;
- (id)getStickerByID:;
- (id)addEmojiSticker:path:;
- (id)addSticker:stickerID:effectInfo:userInfo:entityHandle:;
- (id)addSubTextSticker:;
- (void)addTextureInfoSticker:;
- (id)infoStickers;
- (long long)preAddImageSticker;
- (void)removeSticker:;
- (void)setInfoStickers:;
- (void)setStickerAbove:;
- (long long)stickerCount;
- (void)updateSticker:size:;
- (void)updateStickerLayers;
- (id)init;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
