@interface AWESearchCommentCustomBottomBar : UIView
@property (nonatomic) DUXBaseImageView photoImg;
@property (nonatomic) DUXBaseImageView contactImg;
@property (nonatomic) DUXBaseImageView emotionImg;
@property (nonatomic) UIView inputView;
@property (nonatomic) UIView borderView;
@property (nonatomic) DUXBaseLabel tipsLabel;
@property (nonatomic) @? inputElementClickedBlock;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)configUI;
- (void)setInputElementClickedBlock:;
- (id)inputElementClickedBlock;
- (id)photoImg;
- (id)contactImg;
- (id)emotionImg;
- (void)elementClickedAction;
- (void)setPhotoImg:;
- (void)setContactImg:;
- (void)setEmotionImg:;
- (void)setInputView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)inputView;
- (id)borderView;
- (void)setBorderView:;
- (void)updateWithModel:;
@end
