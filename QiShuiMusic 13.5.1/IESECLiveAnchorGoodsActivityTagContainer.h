@interface IESECLiveAnchorGoodsActivityTagContainer : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel subfixLabel;
@property (nonatomic) UIView subfixBGView;
@property (nonatomic) CAShapeLayer dashLine;
- (void)setSubfixLabel:;
- (id)dashLine;
- (id)dashline;
- (void)setDashLine:;
- (void)setSubfixBGView:;
- (id)subfixBGView;
- (id)subfixLabel;
- (void)updateContent:subfixContent:;
- (void)updateImageName:content:subfixContent:;
- (void)updateImageURL:content:subfixContent:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateFrame;
@end
