@interface CSJRewardedVideoDataContext : NSObject
@property (nonatomic) CSJRewardedVideoModel rewardedVideoModel;
@property (nonatomic) Q quitReason;
@property (nonatomic) BOOL finishRewardTimingInEndcard;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoFrame;
@property (nonatomic) BOOL validEntranceFix;
- (void)setFinishRewardTimingInEndcard:;
- (BOOL)finishRewardTimingInEndcard;
- (BOOL)isPlayFail;
- (unsigned long long)quitReason;
- (id)rewardedVideoModel;
- (void)setQuitReason:;
- (void)setRewardedVideoModel:;
- (void)setValidEntranceFix:;
- (void)setVideoFrame:;
- (BOOL)validEntranceFix;
- (id)init;
- (void).cxx_destruct;
- (id)videoFrame;
@end
