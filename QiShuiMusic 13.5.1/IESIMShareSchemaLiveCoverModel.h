@interface IESIMShareSchemaLiveCoverModel : IESIMBaseApiModel
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString avgColor;
- (id)urlList;
- (id)avgColor;
- (void)setAvgColor:;
- (void)setUrlList:;
- (id)uri;
- (void).cxx_destruct;
- (void)setUri:;
+ (id)JSONKeyPathsByPropertyKey;
@end
