@interface IESECSKUCustomParamsParamsModel : MTLModel
@property (nonatomic) NSDictionary adParams;
@property (nonatomic) NSDictionary boltParam;
@property (nonatomic) IESECSKUCustomParamsCpsParamsParamsModel cpsParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adParams;
- (id)boltParam;
- (id)cpsParams;
- (void)setAdParams:;
- (void)setBoltParam:;
- (void)setCpsParams:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
