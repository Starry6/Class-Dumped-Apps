@interface AWESingleStickerDownloadParameter : NSObject
@property (nonatomic) IESEffectModel sticker;
@property (nonatomic) @? downloadProgressBlock;
@property (nonatomic) @? compeletion;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL isPreload;
- (BOOL)isPreload;
- (void)setIsPreload:;
- (id)compeletion;
- (void)setCompeletion:;
- (BOOL)cancelled;
- (void)setCancelled:;
- (void).cxx_destruct;
- (id)sticker;
- (void)setSticker:;
- (id)downloadProgressBlock;
- (void)setDownloadProgressBlock:;
@end
