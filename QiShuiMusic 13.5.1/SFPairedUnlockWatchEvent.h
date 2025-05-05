@interface SFPairedUnlockWatchEvent : NSObject
@property (nonatomic) I motionCheckDurationMs;
@property (nonatomic) q onWristConfidence;
@property (nonatomic) float timeSinceLastWristRaiseSec;
@property (nonatomic) float timeSinceLastOnWristSec;
@property (nonatomic) float timeSinceBootMin;
@property (nonatomic) NSDictionary eventPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventPayload;
- (void)submitEvent;
- (unsigned int)motionCheckDurationMs;
- (void)setMotionCheckDurationMs:;
- (long long)onWristConfidence;
- (void)setOnWristConfidence:;
- (float)timeSinceLastWristRaiseSec;
- (void)setTimeSinceLastWristRaiseSec:;
- (float)timeSinceLastOnWristSec;
- (void)setTimeSinceLastOnWristSec:;
- (float)timeSinceBootMin;
- (void)setTimeSinceBootMin:;
+ (id)eventName;
@end
