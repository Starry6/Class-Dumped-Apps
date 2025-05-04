@interface AWESearchLiveAssistLabel : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) AWELiveFeedLabelInfoModel infoModel;
- (id)infoModel;
- (void)setInfoModel:;
- (void)updateModel:withAssistText:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateModel:;
@end
