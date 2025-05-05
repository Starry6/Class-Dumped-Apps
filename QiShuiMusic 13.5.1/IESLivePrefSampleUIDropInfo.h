@interface IESLivePrefSampleUIDropInfo : NSObject
@property (nonatomic) NSNumber generateTime;
@property (nonatomic) HMDFrameDropRecord dropRecord;
- (id)dropRecord;
- (id)generateTime;
- (void)setDropRecord:;
- (void)setGenerateTime:;
- (void).cxx_destruct;
@end
