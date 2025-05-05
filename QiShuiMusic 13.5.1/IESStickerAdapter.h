@interface IESStickerAdapter : NSObject
@property (nonatomic) IESSticker sticker;
- (id)_getAnimationStickerFrameWithTime:;
- (id)conversionFrameTime:withAnimation:;
- (void)findSubTime:subIndex:inAnimation:withFrameTime:;
- (id)getStickerFrameWithTimes:;
- (void)updateAttributeWithAttr:type:frameTime:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sticker;
- (id)initWithSticker:;
@end
