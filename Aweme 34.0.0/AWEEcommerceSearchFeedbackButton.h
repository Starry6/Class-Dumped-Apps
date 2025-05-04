@interface AWEEcommerceSearchFeedbackButton : UIButton
@property (nonatomic) AWEEcommerceSearchLongPressDislikeInfo disLikeInfo;
@property (nonatomic) <AWEEcommerceSearchFeedbackPanelProtocol> delegate;
- (id)disLikeInfo;
- (void)setDisLikeInfo:;
- (void)clickFeedbackButton:;
- (void)updateWithDisLikeInfo:;
- (id)delegate;
- (id)initWithFrame:;
- (id)imageRectForContentRect:;
- (id)titleRectForContentRect:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
