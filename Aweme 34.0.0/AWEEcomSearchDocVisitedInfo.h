@interface AWEEcomSearchDocVisitedInfo : NSObject
@property (nonatomic) Q visitedDocCount;
@property (nonatomic) Q lastVisibleItemIndex;
- (unsigned long long)visitedDocCount;
- (unsigned long long)lastVisibleItemIndex;
- (void)setVisitedDocCount:;
- (void)setLastVisibleItemIndex:;
@end
