@interface AWEEcomSearchScrollViewGlideListener : NSObject
@property (nonatomic) {CGPoint=dd} lastContentOffset;
@property (nonatomic) NSDate lastGlideDate;
@property (nonatomic) NSDictionary baseEventParams;
@property (nonatomic) q threshold;
- (id)baseEventParams;
- (id)lastGlideDate;
- (void)setLastGlideDate:;
- (void)setBaseEventParams:;
- (long long)threshold;
- (void)setThreshold:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (id)lastContentOffset;
- (void)setLastContentOffset:;
@end
