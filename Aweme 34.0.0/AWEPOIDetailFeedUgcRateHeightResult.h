@interface AWEPOIDetailFeedUgcRateHeightResult : NSObject
@property (nonatomic) double expandedHeight;
@property (nonatomic) double collapsedHeight;
@property (nonatomic) BOOL hasExpandButton;
@property (nonatomic) Q expandedStatus;
- (BOOL)hasExpandButton;
- (void)setHasExpandButton:;
- (unsigned long long)expandedStatus;
- (void)setExpandedStatus:;
- (double)expandedHeight;
- (double)collapsedHeight;
- (void)setCollapsedHeight:;
- (void)setExpandedHeight:;
@end
