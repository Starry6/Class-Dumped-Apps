@interface BWStillImageCaptureTimeMachineFrameInfo : BWStillImageCaptureFrameInfo
@property (nonatomic) NSInteger timeMachineIndex;
@property (nonatomic) BOOL isNoLongErrorRecoveryFrame;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTimeMachineIndex:mainFlags:sifrFlags:;
- (int)timeMachineIndex;
- (BOOL)isNoLongErrorRecoveryFrame;
- (void)setIsNoLongErrorRecoveryFrame:;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithTimeMachineIndex:mainFlags:sifrFlags:;
@end
