@interface AWEProfileTagView : UIButton
@property (nonatomic) UIView accessView;
@property (nonatomic) AWEProfilePersonalTagModel tagModel;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString accessText;
- (void)setTagModel:;
- (id)tagModel;
- (void)setupUIWithModel:;
- (id)scaleToSize:size:;
- (void)setAccessView:;
- (id)accessView;
- (id)initWithTagModel:userID:accessText:;
- (void)refreshColorAndImage;
- (void)onClickTagButton:;
- (void)addAccessView;
- (id)defaultBtnImage;
- (id)accessText;
- (void)setAccessText:;
- (id)userID;
- (void)setFrame:;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (void)setUserID:;
- (BOOL)isCurrentUser;
+ (id)commonTrackerParams:userID:showText:;
@end
