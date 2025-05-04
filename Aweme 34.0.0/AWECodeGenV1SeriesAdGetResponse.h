@interface AWECodeGenV1SeriesAdGetResponse : AWEBaseResponseModel
@property (nonatomic) AWECodeGenAwemeModel adAwemeModel;
@property (nonatomic) NSString reason;
- (id)adAwemeModel;
- (void)setAdAwemeModel:;
- (void)setReason:;
- (void).cxx_destruct;
- (id)reason;
+ (id)JSONKeyPathsByPropertyKey;
@end
