@interface CSJDislikeRequestModel : CSJRequestModel
@property (nonatomic) NSArray filter_words;
@property (nonatomic) NSString action;
@property (nonatomic) q timestamp;
@property (nonatomic) NSString ad_sdk_version;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString ad_id;
@property (nonatomic) NSString comment;
@property (nonatomic) NSString dislike_source;
- (id)ad_id;
- (id)ad_sdk_version;
- (id)csj_dictionaryValue;
- (id)dislike_source;
- (id)filter_words;
- (void)setAd_id:;
- (void)setAd_sdk_version:;
- (void)setDislike_source:;
- (void)setExtra:;
- (void)setFilter_words:;
- (id)extra;
- (id)comment;
- (id)action;
- (void)setAction:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (long long)timestamp;
- (void)setComment:;
@end
