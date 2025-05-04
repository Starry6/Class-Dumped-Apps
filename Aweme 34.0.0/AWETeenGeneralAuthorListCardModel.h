@interface AWETeenGeneralAuthorListCardModel : AWEBaseApiModel
@property (nonatomic) NSArray authorList;
@property (nonatomic) NSMutableDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)authorList;
- (void)setAuthorList:;
- (void).cxx_destruct;
+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
