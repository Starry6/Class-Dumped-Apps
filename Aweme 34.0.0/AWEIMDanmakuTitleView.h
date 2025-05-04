@interface AWEIMDanmakuTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMUnreadDotView dotView;
@property (nonatomic) AWEIMDanmakuTabbarModel model;
@property (nonatomic) @? selectedBlock;
@property (nonatomic) BOOL selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)setSelectedBlock:;
- (id)selectedBlock;
- (void)cleanUnReadCount;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)selected;
- (void)setSelected:;
- (id)dotView;
- (void)setDotView:;
- (void)updateWithCount:;
- (id)realSize;
@end
