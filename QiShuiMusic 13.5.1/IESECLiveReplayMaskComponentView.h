@interface IESECLiveReplayMaskComponentView : UIView
@property (nonatomic) double gradientHeight;
@property (nonatomic) CAGradientLayer topGradientLayer;
@property (nonatomic) CAGradientLayer bottomGradientLayer;
@property (nonatomic) UIView bottomBackgroundView;
@property (nonatomic) IESECLiveReplayDataStore dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bottomBackgroundView;
- (id)bottomGradientLayer;
- (void)setBottomBackgroundView:;
- (void)setBottomGradientLayer:;
- (void)setTopGradientLayer:;
- (id)topGradientLayer;
- (void)updateGradientHeight:animateDuration:;
- (void)setDataStore:;
- (id)dataStore;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)gradientHeight;
- (void)setGradientHeight:;
@end
