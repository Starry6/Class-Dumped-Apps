@interface AWEGeneralFilmTVLeadingCreatorModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSArray actor;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)actor;
- (void)setActor:;
+ (id)actorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
