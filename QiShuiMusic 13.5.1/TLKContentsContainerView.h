@interface TLKContentsContainerView : TLKStackView
@property (nonatomic) NSMutableArray contentsViews;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithContents:;
- (id)contentsViews;
- (void)setContentsViews:;
@end
