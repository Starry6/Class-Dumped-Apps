@interface AWEProtectNickNameEntranceView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel protectNickNameLabel;
@property (nonatomic) UILabel goEditEntrance;
@property (nonatomic) UIView sepView;
@property (nonatomic) AWEProfileFrequencyInfoModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sepView;
- (void)setSepView:;
- (void)updateWithFrequencyInfo:;
- (id)protectNickNameLabel;
- (id)goEditEntrance;
- (void)goEditEntranceClicked;
- (void)setProtectNickNameLabel:;
- (void)setGoEditEntrance:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)popViewController;
@end
