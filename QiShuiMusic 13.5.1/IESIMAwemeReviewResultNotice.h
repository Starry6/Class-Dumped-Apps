@interface IESIMAwemeReviewResultNotice : IESIMBaseApiModel
@property (nonatomic) q reviewType;
@property (nonatomic) BOOL shouldTell;
@property (nonatomic) NSString linkUrl;
@property (nonatomic) NSString videoDetailNoticeBottom;
@property (nonatomic) NSString videoDetailNotice;
@property (nonatomic) NSString coverNotice;
- (id)coverNotice;
- (long long)reviewType;
- (BOOL)shouldTell;
- (id)videoDetailNotice;
- (id)videoDetailNoticeBottom;
- (void).cxx_destruct;
- (id)linkUrl;
+ (id)reviewTypeJSONTransformer;
+ (id)shouldTellJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
