@interface UIKBSplitImageView : UIView
@property (nonatomic) NSString filterType;
- (void)insertSubviewAtBottom:;
- (void)setContentsMultiplyColor:;
- (void)setImage:splitLeft:splitRight:keyplane:;
- (void)prepareForDisplay:;
- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)setImage:cachedWidth:keyplane:;
- (id)initWithFrame:canStretchAsFullWidth:;
- (void)clearImages;
- (void)setFilterType:;
- (id)filterType;
- (void).cxx_destruct;
@end
