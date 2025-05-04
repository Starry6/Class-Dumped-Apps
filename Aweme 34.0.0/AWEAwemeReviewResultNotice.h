@interface AWEAwemeReviewResultNotice : AWEBaseApiModel
@property (nonatomic) q reviewType;
@property (nonatomic) BOOL shouldTell;
@property (nonatomic) NSString linkUrl;
@property (nonatomic) NSString videoDetailNoticeBottom;
@property (nonatomic) NSString videoDetailNotice;
@property (nonatomic) NSString coverNotice;
@property (nonatomic) NSString extra;
@property (nonatomic) NSDictionary extraDict;
- (id)extraDict;
- (long long)reviewType;
- (BOOL)shouldTell;
- (id)videoDetailNoticeBottom;
- (id)videoDetailNotice;
- (id)coverNotice;
- (id)extra;
- (void).cxx_destruct;
- (id)linkUrl;
+ (id)shouldTellJSONTransformer;
+ (id)reviewTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
