@interface AWETeenModeLandscapeEntryView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) BOOL isMonitoring;
- (void)updateUIForStyleDefault;
- (id)init;
- (void)dealloc;
- (BOOL)isMonitoring;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)reset;
- (void)setIconImageView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setIsMonitoring:;
- (void)initUI;
@end
