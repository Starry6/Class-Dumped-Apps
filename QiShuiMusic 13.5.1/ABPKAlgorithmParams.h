@interface ABPKAlgorithmParams : NSObject
@property (nonatomic) {?=[3]} regIntrinsics;
@property (nonatomic) {CGSize=dd} regImageResolution;
@property (nonatomic) ABPK2DDetectionConfiguration config2DDetection;
- (void).cxx_destruct;
- (id)toDict;
- (id)initWithRegIntrinsics:regImageResolution:;
- (id)regIntrinsics;
- (void)setRegIntrinsics:;
- (id)regImageResolution;
- (void)setRegImageResolution:;
- (id)config2DDetection;
- (void)setConfig2DDetection:;
@end
