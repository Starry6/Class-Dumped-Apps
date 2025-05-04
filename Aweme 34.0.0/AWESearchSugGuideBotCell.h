@interface AWESearchSugGuideBotCell : AWESearchSugTableViewCell
@property (nonatomic) UIImageView guideContentView;
@property (nonatomic) LOTAnimationView chatBotView;
@property (nonatomic) NSString lottiePath;
@property (nonatomic) UIImageView chatBotDefaultView;
- (void)configureUI;
- (id)guideContentView;
- (void)setGuideContentView:;
- (void)configureWithContent:model:;
- (id)chatBotView;
- (id)chatBotDefaultView;
- (id)lottiePath;
- (void)setLottiePath:;
- (void)setChatBotView:;
- (void)setChatBotDefaultView:;
- (void)setComplementStyle:;
- (void).cxx_destruct;
- (void)updateType;
- (void)configureWithModel:;
+ (id)identifier;
@end
