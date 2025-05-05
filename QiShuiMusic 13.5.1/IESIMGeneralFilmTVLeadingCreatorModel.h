@interface IESIMGeneralFilmTVLeadingCreatorModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSArray actor;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)actor;
- (void)setActor:;
+ (id)actorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
