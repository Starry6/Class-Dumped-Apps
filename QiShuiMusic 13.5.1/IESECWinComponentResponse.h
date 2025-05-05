@interface IESECWinComponentResponse : IESECBaseApiModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray components;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSString extraSchema;
- (void)setExtraSchema:;
- (id)extraSchema;
- (id)logExtra;
- (void)setLogExtra:;
- (id)components;
- (void)setComponents:;
- (void).cxx_destruct;
+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
