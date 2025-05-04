@interface AWEVideoEditStickerHeaderView : UIView
@property (nonatomic) NSArray headerViews;
- (void)setHeaderViews:;
- (id)headerViews;
- (void)updateWithTitles:;
- (void)updateWithAttributes:yOffset:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (double)headerHeight;
@end
