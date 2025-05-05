@interface SNVoiceTriggerCommand : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q minDurationBlocks;
@property (nonatomic) double confidenceThreshold;
- (void).cxx_destruct;
- (id)name;
- (double)confidenceThreshold;
- (long long)minDurationBlocks;
@end
