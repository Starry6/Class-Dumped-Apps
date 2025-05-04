@interface AWEUIListCellNoticeActionButton : UIButton
@property (nonatomic) BOOL isAttentionState;
@property (nonatomic) NSString attentionTitle;
@property (nonatomic) NSString normalTitle;
@property (nonatomic) AWEUIListCellActionNoticeButtonColorModel btnColorModel;
- (void)setIsAttentionState:;
- (void)setAttentionTitle:;
- (void)setNormalTitle:;
- (void)setBtnColorModel:;
- (id)normalTitle;
- (id)attentionTitle;
- (id)attributedStringForString:color:;
- (BOOL)isAttentionState;
- (id)btnColorModel;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void).cxx_destruct;
@end
