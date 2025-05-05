@interface AWEIMMessageStateIndicator : NSObject
@property (nonatomic) q messageState;
@property (nonatomic) UIView icon;
@property (nonatomic) UIImageView currentStateImageView;
@property (nonatomic) double progress;
@property (nonatomic) q indicatorScene;
- (void)__stopAnimating;
- (void)__configIcon;
- (id)__imageForState:progress:;
- (void)__startAnimating;
- (void)changeToState:progress:;
- (id)currentStateImageView;
- (long long)indicatorScene;
- (long long)messageState;
- (void)setCurrentStateImageView:;
- (void)setIndicatorScene:;
- (void)setMessageState:;
- (void)updateIconFrame:;
- (id)init;
- (void)setProgress:;
- (id)icon;
- (double)progress;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)imageForProcess:;
@end
