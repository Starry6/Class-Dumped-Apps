@interface IESECGoodsDetailSchemaMergeMergeParamsModel : IESLiveBridgeModel
@property (nonatomic) NSDictionary entranceInfo;
@property (nonatomic) NSDictionary eventAddition;
@property (nonatomic) NSString followStatus;
- (id)entranceInfo;
- (id)eventAddition;
- (id)followStatus;
- (void)setEntranceInfo:;
- (void)setEventAddition:;
- (void)setFollowStatus:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
