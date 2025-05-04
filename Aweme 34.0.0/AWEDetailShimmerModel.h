@interface AWEDetailShimmerModel : NSObject
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL isShimming;
@property (nonatomic) double topGap;
@property (nonatomic) double leftGap;
@property (nonatomic) double rightGap;
@property (nonatomic) double bottomGap;
- (BOOL)isShimming;
- (void)setIsShimming:;
- (double)topGap;
- (void)setTopGap:;
- (double)leftGap;
- (void)setLeftGap:;
- (double)rightGap;
- (void)setRightGap:;
- (double)bottomGap;
- (void)setBottomGap:;
- (BOOL)shouldShow;
- (void)setShouldShow:;
@end
