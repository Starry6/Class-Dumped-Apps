@interface CJPayOCRScanWindowView : UIView
@property (nonatomic) UIImageView leftTopImageView;
@property (nonatomic) UIImageView leftBottomImageView;
@property (nonatomic) UIImageView rightTopImageView;
@property (nonatomic) UIImageView rightBottomImageView;
@property (nonatomic) UIImageView scanImageView;
- (id)leftBottomImageView;
- (id)leftTopImageView;
- (void)p_setupUI;
- (void)p_startScanAnimation;
- (id)rightBottomImageView;
- (id)rightTopImageView;
- (id)scanImageView;
- (void)setLeftBottomImageView:;
- (void)setLeftTopImageView:;
- (void)setRightBottomImageView:;
- (void)setRightTopImageView:;
- (void)setScanImageView:;
- (void)showScanLineView:;
- (id)init;
- (void)setBounds:;
- (void).cxx_destruct;
@end
