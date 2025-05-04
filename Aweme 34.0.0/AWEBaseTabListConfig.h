@interface AWEBaseTabListConfig : NSObject
@property (nonatomic) BOOL enableTabChangeAnimation;
@property (nonatomic) BOOL disableTabContentScroll;
@property (nonatomic) BOOL disableTabContentBounce;
@property (nonatomic) BOOL disableTabContentManulPan;
@property (nonatomic) BOOL enableDynamicTabContentViewHeight;
@property (nonatomic) BOOL notifyHeaderAppearanceWhenScrolling;
@property (nonatomic) q layoutSubviewsOptions;
- (void)setEnableDynamicTabContentViewHeight:;
- (void)setDisableTabContentManulPan:;
- (void)setEnableTabChangeAnimation:;
- (void)setDisableTabContentBounce:;
- (void)setDisableTabContentScroll:;
- (BOOL)enableTabChangeAnimation;
- (BOOL)disableTabContentScroll;
- (BOOL)disableTabContentBounce;
- (BOOL)disableTabContentManulPan;
- (BOOL)enableDynamicTabContentViewHeight;
- (BOOL)notifyHeaderAppearanceWhenScrolling;
- (void)setNotifyHeaderAppearanceWhenScrolling:;
- (long long)layoutSubviewsOptions;
- (void)setLayoutSubviewsOptions:;
@end
