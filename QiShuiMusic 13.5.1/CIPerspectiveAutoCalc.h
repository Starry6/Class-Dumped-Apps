@interface CIPerspectiveAutoCalc : NSObject
@property (nonatomic) double pitch;
@property (nonatomic) double yaw;
@property (nonatomic) double roll;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL generateDebugImage;
@property (nonatomic) CIImage debugImage;
@property (nonatomic) q pitchFailureReason;
@property (nonatomic) q yawFailureReason;
- (double)yaw;
- (double)confidence;
- (void)dealloc;
- (double)pitch;
- (double)roll;
- (BOOL)compute;
- (id)initWithContext:image:config:;
- (BOOL)generateDebugImage;
- (void)setGenerateDebugImage:;
- (id)debugImage;
- (long long)pitchFailureReason;
- (long long)yawFailureReason;
@end
