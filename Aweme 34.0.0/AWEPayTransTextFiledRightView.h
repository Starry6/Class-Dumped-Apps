@interface AWEPayTransTextFiledRightView : UIView
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIImageView clearButton;
@property (nonatomic) @? clearBlock;
- (void)p_setupUI;
- (id)tipsLabel;
- (void)p_clearText;
- (void)setTipsLabel:;
- (void)updateText:color:;
- (void)setClearBlock:;
- (id)clearBlock;
- (id)init;
- (void).cxx_destruct;
- (id)clearButton;
- (void)setClearButton:;
@end
