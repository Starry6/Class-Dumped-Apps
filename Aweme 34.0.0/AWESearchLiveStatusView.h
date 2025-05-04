@interface AWESearchLiveStatusView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView liveBackgroundView;
@property (nonatomic) UIImageView liveTypeTagImage;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)configModel:;
- (id)liveBackgroundView;
- (void)setLiveBackgroundView:;
- (id)liveTypeTagImage;
- (void)setLiveTypeTagImage:;
- (void)configLivingUI;
- (void)configReplayUI;
- (void)liveTagWidthChanged:userCountWidth:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
