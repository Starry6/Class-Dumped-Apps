@interface IESLiveSendCommerceEventParamModel : IESLiveBridgeModel
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary params;
- (void)setEvent:;
- (id)event;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)modelCustomPropertyMapper;
@end
