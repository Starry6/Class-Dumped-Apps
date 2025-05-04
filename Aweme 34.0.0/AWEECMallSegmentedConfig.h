@interface AWEECMallSegmentedConfig : NSObject
@property (nonatomic) q widthStyle;
@property (nonatomic) double itemSpacing;
@property (nonatomic) {UIEdgeInsets=dddd} paddingInset;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) BOOL enableUpdatingTitleColorWhenScrolling;
@property (nonatomic) BOOL fixItemSpacing;
- (void)setWidthStyle:;
- (void)setPaddingInset:;
- (void)setFixItemSpacing:;
- (void)setEnableUpdatingTitleColorWhenScrolling:;
- (BOOL)fixItemSpacing;
- (id)paddingInset;
- (BOOL)enableUpdatingTitleColorWhenScrolling;
- (long long)widthStyle;
- (double)itemSpacing;
- (void)setItemSpacing:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
+ (id)defaultConfig;
@end
