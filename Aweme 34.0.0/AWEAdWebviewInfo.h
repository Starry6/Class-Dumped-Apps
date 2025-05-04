@interface AWEAdWebviewInfo : NSObject
@property (nonatomic) BOOL isSimilarEntry;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString refer;
@property (nonatomic) BOOL shouldLoadSimilarRecommendAd;
- (void)setRefer:;
- (id)refer;
- (id)initWithAwemeModel:refer:isSimilarEntry:;
- (BOOL)shouldLoadSimilarRecommendAd;
- (void)setShouldLoadSimilarRecommendAd:;
- (BOOL)isSimilarEntry;
- (void)setIsSimilarEntry:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
