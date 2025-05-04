@interface AWELandscapeMixInfoOptConfig : NSObject
- (id)init;
- (void).cxx_destruct;
+ (BOOL)titleMixIconEnabled;
+ (void)setTitleMixIconEnabled:;
+ (BOOL)mixIconStyleTitle;
+ (void)setMixIconStyleTitle:;
+ (BOOL)mixIconStyleImage;
+ (void)setMixIconStyleImage:;
+ (BOOL)mixSegmentEnabled;
+ (void)setMixSegmentEnabled:;
+ (BOOL)mixSwitchEnabled;
+ (void)setMixSwitchEnabled:;
+ (BOOL)hideBottonInfoView;
+ (id)mixPreloadConfig;
+ (void)setMixPreloadConfig:;
@end
