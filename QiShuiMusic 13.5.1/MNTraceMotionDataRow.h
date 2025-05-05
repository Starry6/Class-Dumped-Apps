@interface MNTraceMotionDataRow : NSObject
@property (nonatomic) double position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) Q motionType;
@property (nonatomic) Q exitType;
@property (nonatomic) Q confidence;
- (unsigned long long)confidence;
- (double)position;
- (void)setConfidence:;
- (void)setMotionType:;
- (unsigned long long)motionType;
- (void)setTimestamp:;
- (double)timestamp;
- (unsigned long long)exitType;
- (void)setExitType:;
@end
