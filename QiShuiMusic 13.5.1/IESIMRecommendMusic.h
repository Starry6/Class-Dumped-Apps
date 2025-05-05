@interface IESIMRecommendMusic : IESIMBaseApiModel
@property (nonatomic) IESIMMusicModel music;
@property (nonatomic) NSString username;
@property (nonatomic) NSString schema;
- (id)schema;
- (id)username;
- (id)music;
- (void)setUsername:;
- (void)setMusic:;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
