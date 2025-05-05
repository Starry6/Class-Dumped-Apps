@interface MLCSliceCPUDeviceOps : MLCCPUDeviceOps
@property (nonatomic) Q beginOffset;
@property (nonatomic) NSArray begin;
@property (nonatomic) NSArray count;
@property (nonatomic) NSArray stride;
- (void)setCount:;
- (id)stride;
- (void).cxx_destruct;
- (id)begin;
- (id)count;
- (void)setStride:;
- (void)setBegin:;
- (id)initWithType:params:inDeltaData:outDeltaData:weightsDeltaData:biasDeltaData:weightsMomentumData:biasMomentumData:betaDeltaData:gammaDeltaData:betaMomentumData:gammaMomentumData:;
- (unsigned long long)beginOffset;
- (void)setBeginOffset:;
+ (id)deviceOpsWithType:params:inDeltaData:outDeltaData:weightsDeltaData:biasDeltaData:weightsMomentumData:biasMomentumData:;
@end
