@interface CXAnswerCallAction : CXCallAction
@property (nonatomic) NSDate dateConnected;
@property (nonatomic) BOOL downgradeToAudio;
@property (nonatomic) BOOL pauseVideoToStart;
- (void)setLocalLandscapeAspectRatio:;
- (id)localPortraitAspectRatio;
- (void)setLocalPortraitAspectRatio:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (id)localLandscapeAspectRatio;
- (void)fulfill;
- (BOOL)pauseVideoToStart;
- (BOOL)downgradeToAudio;
- (void)setPauseVideoToStart:;
- (void)setDowngradeToAudio:;
- (id)dateConnected;
- (void)setDateConnected:;
- (void)updateSanitizedCopy:withZone:;
- (void)updateCopy:withZone:;
- (void)fulfillWithDateConnected:;
- (void)updateAsFulfilledWithDateConnected:;
+ (BOOL)supportsSecureCoding;
+ (double)timeout;
@end
