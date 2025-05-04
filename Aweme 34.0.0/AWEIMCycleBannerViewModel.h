@interface AWEIMCycleBannerViewModel : NSObject
@property (nonatomic) Q bannerCount;
@property (nonatomic) NSArray dataSourceArray;
@property (nonatomic) double autoPlayInterval;
@property (nonatomic) BOOL shouldAutoPlay;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)dataSourceArray;
- (void)setShouldAutoPlay:;
- (void)setAutoPlayInterval:;
- (double)autoPlayInterval;
- (unsigned long long)bannerCount;
- (void)trackEvent:bannerIndex:;
- (id)init;
- (void)setupDataSource;
- (void).cxx_destruct;
- (BOOL)shouldAutoPlay;
+ (double)bannerHeightWithWidth:;
@end
