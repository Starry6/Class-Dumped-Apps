@interface IESLiveRedEnvelopeUpdateParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber boxId;
@property (nonatomic) NSNumber boxStatus;
@property (nonatomic) @ extraInfo;
@property (nonatomic) NSString type;
- (id)boxId;
- (id)boxStatus;
- (void)setBoxId:;
- (void)setBoxStatus:;
- (void)setExtraInfo:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)extraInfo;
+ (id)modelCustomPropertyMapper;
@end
