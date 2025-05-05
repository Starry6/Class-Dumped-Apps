@interface IESLiveGetDressInfoParamModel : IESLiveBridgeModel
@property (nonatomic) NSString dressId;
@property (nonatomic) NSNumber dressType;
@property (nonatomic) NSString definition;
@property (nonatomic) NSString definitionName;
@property (nonatomic) NSNumber autoFetch;
- (id)dressId;
- (id)autoFetch;
- (id)definitionName;
- (id)dressType;
- (void)setAutoFetch:;
- (void)setDefinitionName:;
- (void)setDressId:;
- (void)setDressType:;
- (id)definition;
- (void).cxx_destruct;
- (void)setDefinition:;
+ (id)modelCustomPropertyMapper;
@end
