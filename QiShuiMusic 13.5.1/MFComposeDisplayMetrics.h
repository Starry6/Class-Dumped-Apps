@interface MFComposeDisplayMetrics : NSObject
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} layoutMargins;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsets;
@property (nonatomic) BOOL isCompactHeight;
@property (nonatomic) double trailingButtonMidlineOffset;
@property (nonatomic) {UIEdgeInsets=dddd} sendBarButtonItemImageInsets;
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} headerViewSeparatorInset;
- (void)setTraitCollection:;
- (void)setSafeAreaInsets:;
- (id)safeAreaInsets;
- (void)setLayoutMargins:;
- (id)traitCollection;
- (id)layoutMargins;
- (void).cxx_destruct;
- (double)trailingButtonMidlineOffset;
- (id)sendBarButtonItemImageInsets;
- (id)headerViewSeparatorInset;
- (BOOL)isCompactHeight;
+ (id)displayMetricsWithTraitCollection:layoutMargins:safeAreaInsets:;
@end
