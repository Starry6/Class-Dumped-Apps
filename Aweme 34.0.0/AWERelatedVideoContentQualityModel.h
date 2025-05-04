@interface AWERelatedVideoContentQualityModel : NSObject
@property (nonatomic) AWEAwemeModel exitItem;
@property (nonatomic) BOOL isScroll;
@property (nonatomic) q sameAuthorCount;
@property (nonatomic) q unCorrelatedCountV2;
@property (nonatomic) q unCorrelatedCountV3;
- (void)setIsScroll:;
- (id)exitItem;
- (void)setExitItem:;
- (BOOL)isScroll;
- (long long)sameAuthorCount;
- (void)setSameAuthorCount:;
- (long long)unCorrelatedCountV2;
- (void)setUnCorrelatedCountV2:;
- (long long)unCorrelatedCountV3;
- (void)setUnCorrelatedCountV3:;
- (void).cxx_destruct;
@end
