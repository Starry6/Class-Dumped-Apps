@interface IESMMNewTimeMachineTimeRange : NSObject
@property (nonatomic) double src_In;
@property (nonatomic) double src_Out;
@property (nonatomic) double des_In;
@property (nonatomic) double des_Out;
@property (nonatomic) double recoverDuration;
@property (nonatomic) double src_Duration;
@property (nonatomic) q timeMachineType;
- (double)des_Out;
- (long long)timeMachineType;
- (double)recoverDuration;
- (double)src_Out;
- (double)des_In;
- (void)setDes_In:;
- (void)setDes_Out:;
- (void)setRecoverDuration:;
- (void)setSrc_Duration:;
- (void)setSrc_In:;
- (void)setSrc_Out:;
- (void)setTimeMachineType:;
- (double)src_Duration;
- (double)src_In;
- (id)init;
- (id)copyWithZone:;
@end
