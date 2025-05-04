@interface AWESearchScanBoxSuggestModeModel : AWEBaseApiModel
@property (nonatomic) NSDictionary bbox;
@property (nonatomic) NSString tosID;
@property (nonatomic) NSString text;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString query;
@property (nonatomic) TTHttpResponse csp_ttResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCsp_ttResponse:;
- (id)tosID;
- (void)setTosID:;
- (id)csp_ttResponse;
- (void)setQuery:;
- (void)setText:;
- (id)query;
- (id)text;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)bbox;
- (void)setBbox:;
+ (id)JSONKeyPathsByPropertyKey;
@end
