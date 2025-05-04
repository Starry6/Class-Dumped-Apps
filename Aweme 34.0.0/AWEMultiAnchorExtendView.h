@interface AWEMultiAnchorExtendView : UIView
@property (nonatomic) AWEPOIEntryViewLayout layout;
@property (nonatomic) UILabel multiCountLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) double contentWidth;
@property (nonatomic) @? clickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)clickMultiAnchorEventHandler:;
- (void)configMultiAnchorCount:useSeperate:;
- (void)hiddenExtendView;
- (void)clickAction:;
- (id)multiCountLabel;
- (void)setMultiCountLabel:;
- (id)initWithLayout:;
- (void)setLayout:;
- (id)layout;
- (void)setContentWidth:;
- (double)contentWidth;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (double)contentViewWidth;
@end
