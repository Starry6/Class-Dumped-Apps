@interface AWEMVPadAuthorModelV2 : AWEBaseApiModel
@property (nonatomic) NSArray authorList;
@property (nonatomic) NSNumber offset;
- (id)authorList;
- (void)setAuthorList:;
- (void)setOffset:;
- (id)offset;
- (void).cxx_destruct;
+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
