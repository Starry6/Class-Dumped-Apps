@interface AWEImageTextShrinkComponent : AWEImageTextBaseComponent
@property (nonatomic) BOOL albumContentShrink;
- (void)sectionWillDisplayCell:index:model:;
- (void)updateShrinkAlbumContentMode:;
- (id)getCurrentContentView;
- (id)getCurrentContentViewBackgroundColor;
- (id)getCurrentContentViewRect:;
- (void)endShrinkAlbumContentAnimation;
- (id)registerProtocol;
- (BOOL)albumContentShrink;
- (void)setAlbumContentShrink:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManager:;
@end
