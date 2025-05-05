@interface IESImageAnimationStickerFilter : IESImageListFilter
@property (nonatomic) NSArray stickers;
- (void)removeStickerWithKey:;
- (id)stickers;
- (void)addSticker:;
@end
