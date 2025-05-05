@interface IESIMLiveSearchModel : IESIMBaseApiModel
@property (nonatomic) NSNumber type;
@property (nonatomic) IESIMAwemeModel live;
- (void)setLive:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)live;
+ (id)liveModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
