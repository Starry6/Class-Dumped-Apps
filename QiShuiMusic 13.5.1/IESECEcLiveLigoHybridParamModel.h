@interface IESECEcLiveLigoHybridParamModel : IESLiveBridgeModel
@property (nonatomic) NSString function;
@property (nonatomic) NSString bizName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString roomId;
- (id)bizName;
- (id)roomId;
- (void)setBizName:;
- (void)setRoomId:;
- (id)function;
- (void)setFunction:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)modelCustomPropertyMapper;
@end
