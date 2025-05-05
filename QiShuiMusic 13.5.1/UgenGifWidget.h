@interface UgenGifWidget : UgenWidget
@property (nonatomic) UgenGifImageView gifImageView;
@property (nonatomic) NSMutableDictionary gifImageCache;
@property (nonatomic) NSString scaleType;
@property (nonatomic) NSString src;
- (id)gifImageCache;
- (id)gifImageView;
- (void)setGifImageCache:;
- (void)setGifImageView:;
- (id)ugenView;
- (id)init;
- (void)layout;
- (void).cxx_destruct;
- (id)src;
- (void)setSrc:;
- (void)render;
- (id)scaleType;
- (void)setScaleType:;
@end
