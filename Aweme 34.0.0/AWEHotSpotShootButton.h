@interface AWEHotSpotShootButton : UIButton
@property (nonatomic) Q styleType;
@property (nonatomic) <AWEHotSpotShootButtonDelegate> delegate;
- (void)setStyleType:;
- (void)updateViewWithModel:;
- (void)setupShootButtonStyle;
- (id)iconBounds;
- (id)spaceDistance;
- (double)fontSize;
- (id)delegate;
- (id)initWithFrame:;
- (unsigned long long)styleType;
- (void).cxx_destruct;
- (id)initWithType:;
- (void)setDelegate:;
- (void)updateTitle:;
@end
