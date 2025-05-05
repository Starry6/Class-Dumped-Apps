@interface IESECEcLiveCardActionParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber actionType;
@property (nonatomic) NSDictionary params;
- (id)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)modelCustomPropertyMapper;
@end
