@interface AWEGeneralSearchResultBackgroundModel : AWESearchBackgroundModel
@property (nonatomic) double resultBackgroundBlankOffset;
@property (nonatomic) q hideCorner;
@property (nonatomic) double displayHeight;
@property (nonatomic) double feedMarginTop;
@property (nonatomic) double extraHeight;
@property (nonatomic) double compensationOffset;
@property (nonatomic) Q cornerType;
- (double)feedMarginTop;
- (double)resultBackgroundBlankOffset;
- (void)setResultBackgroundBlankOffset:;
- (void)setHideCorner:;
- (void)setFeedMarginTop:;
- (double)extraHeight;
- (void)setExtraHeight:;
- (void)setCompensationOffset:;
- (long long)hideCorner;
- (double)compensationOffset;
- (double)displayHeight;
- (unsigned long long)cornerType;
- (void)setCornerType:;
- (void)setDisplayHeight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
