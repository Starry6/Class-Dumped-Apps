@interface AWEFeedTabJumpGuideView : UIView
@property (nonatomic) AWEFeedTabJumpGuideViewConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:config:;
- (id)jumpBtnWithImageURLList:title:;
- (void)btnClick;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setupUI;
@end
