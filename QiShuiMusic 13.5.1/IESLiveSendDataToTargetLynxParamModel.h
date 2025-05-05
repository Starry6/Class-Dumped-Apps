@interface IESLiveSendDataToTargetLynxParamModel : IESLiveBridgeModel
@property (nonatomic) NSString from;
@property (nonatomic) NSArray to;
@property (nonatomic) NSString data;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (id)from;
- (void)setFrom:;
- (id)to;
- (void)setTo:;
+ (id)modelCustomPropertyMapper;
@end
