@interface BDXLynxSwiperViewLayout : NSObject
@property (nonatomic) UIView pageView;
@property (nonatomic) {CGSize=dd} itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double previousMargin;
@property (nonatomic) double nextMargin;
@property (nonatomic) double startMargin;
@property (nonatomic) double endMargin;
@property (nonatomic) {UIEdgeInsets=dddd} sectionInset;
@property (nonatomic) Q layoutType;
@property (nonatomic) double minimumScale;
@property (nonatomic) double minimumAlpha;
@property (nonatomic) double maximumAngle;
@property (nonatomic) double maxXScale;
@property (nonatomic) double minXScale;
@property (nonatomic) double maxYScale;
@property (nonatomic) double minYScale;
@property (nonatomic) double normTranslationFactor;
@property (nonatomic) BOOL isInfiniteLoop;
@property (nonatomic) double rateOfChange;
@property (nonatomic) BOOL adjustSpacingWhenScroling;
@property (nonatomic) BOOL vertical;
@property (nonatomic) BOOL itemVerticalCenter;
@property (nonatomic) BOOL itemHorizontalCenter;
@property (nonatomic) {UIEdgeInsets=dddd} onlyOneSectionInset;
@property (nonatomic) {UIEdgeInsets=dddd} firstSectionInset;
@property (nonatomic) {UIEdgeInsets=dddd} lastSectionInset;
@property (nonatomic) {UIEdgeInsets=dddd} middleSectionInset;
@property (nonatomic) BOOL isRTL;
- (void)setStartMargin:;
- (BOOL)adjustSpacingWhenScroling;
- (double)endMargin;
- (id)firstSectionInset;
- (BOOL)isInfiniteLoop;
- (BOOL)itemHorizontalCenter;
- (BOOL)itemVerticalCenter;
- (id)lastSectionInset;
- (double)maxXScale;
- (double)maxYScale;
- (double)maximumAngle;
- (id)middleSectionInset;
- (double)minXScale;
- (double)minYScale;
- (double)minimumAlpha;
- (double)nextMargin;
- (double)normTranslationFactor;
- (id)onlyOneSectionInset;
- (double)previousMargin;
- (double)rateOfChange;
- (void)setAdjustSpacingWhenScroling:;
- (void)setEndMargin:;
- (void)setIsInfiniteLoop:;
- (void)setItemHorizontalCenter:;
- (void)setItemVerticalCenter:;
- (void)setMaxXScale:;
- (void)setMaxYScale:;
- (void)setMaximumAngle:;
- (void)setMinXScale:;
- (void)setMinYScale:;
- (void)setMinimumAlpha:;
- (void)setNextMargin:;
- (void)setNormTranslationFactor:;
- (void)setPreviousMargin:;
- (void)setRateOfChange:;
- (double)startMargin;
- (unsigned long long)layoutType;
- (id)pageView;
- (void)setLayoutType:;
- (double)itemSpacing;
- (id)init;
- (void)setItemSpacing:;
- (void)setVertical:;
- (double)minimumScale;
- (BOOL)vertical;
- (id)itemSize;
- (void).cxx_destruct;
- (void)setMinimumScale:;
- (BOOL)isRTL;
- (void)setItemSize:;
- (void)setSectionInset:;
- (id)sectionInset;
- (void)setIsRTL:;
- (void)setPageView:;
@end
