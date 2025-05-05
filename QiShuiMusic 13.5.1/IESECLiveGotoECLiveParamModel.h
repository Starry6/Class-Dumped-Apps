@interface IESECLiveGotoECLiveParamModel : IESLiveBridgeModel
@property (nonatomic) NSString baseSchema;
@property (nonatomic) NSDictionary query;
@property (nonatomic) NSDictionary ecomLiveParams;
@property (nonatomic) BOOL open;
- (id)baseSchema;
- (id)ecomLiveParams;
- (void)setBaseSchema:;
- (void)setEcomLiveParams:;
- (void)setOpen:;
- (BOOL)open;
- (void)setQuery:;
- (id)query;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
