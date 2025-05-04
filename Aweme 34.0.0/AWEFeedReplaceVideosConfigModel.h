@interface AWEFeedReplaceVideosConfigModel : NSObject
@property (nonatomic) NSString strategy;
@property (nonatomic) q retainVideoCount;
@property (nonatomic) BOOL enableFilterSoftAd;
@property (nonatomic) BOOL enableFilterHardAd;
@property (nonatomic) BOOL enableFilterSpecialCard;
@property (nonatomic) NSArray filterAwemeTypeList;
@property (nonatomic) BOOL enableRequestWithoutMarketing;
- (long long)retainVideoCount;
- (void)setRetainVideoCount:;
- (BOOL)enableFilterSoftAd;
- (void)setEnableFilterSoftAd:;
- (BOOL)enableFilterHardAd;
- (void)setEnableFilterHardAd:;
- (BOOL)enableFilterSpecialCard;
- (void)setEnableFilterSpecialCard:;
- (id)filterAwemeTypeList;
- (void)setFilterAwemeTypeList:;
- (BOOL)enableRequestWithoutMarketing;
- (void)setEnableRequestWithoutMarketing:;
- (id)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)initWithConfigDict:;
@end
