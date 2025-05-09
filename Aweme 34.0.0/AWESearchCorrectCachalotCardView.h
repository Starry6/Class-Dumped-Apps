@interface AWESearchCorrectCachalotCardView : UIView
@property (nonatomic) AWESearchCorrectCachalotContentView contentView;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWESearchCorrectModel correctModel;
@property (nonatomic) AWESearchCachalotResultContext context;
@property (nonatomic) AWESearchTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShow;
- (void)componentClicked;
- (void)componentWillDisplay;
- (id)correctModel;
- (void)setCorrectModel:;
- (void)configUI;
- (void)trackClick;
- (id)tracker;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)context;
- (id)componentView;
- (id)lineView;
- (void)setLineView:;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
@end
