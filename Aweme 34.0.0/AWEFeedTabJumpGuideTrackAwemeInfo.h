@interface AWEFeedTabJumpGuideTrackAwemeInfo : NSObject
@property (nonatomic) q videoExposeCount;
@property (nonatomic) q recvTime;
@property (nonatomic) q maxPlayProgress;
@property (nonatomic) NSString notShowReason;
@property (nonatomic) NSString trigger;
@property (nonatomic) BOOL didShow;
- (void)setDidShow:;
- (id)notShowReason;
- (void)setNotShowReason:;
- (long long)videoExposeCount;
- (void)setVideoExposeCount:;
- (long long)recvTime;
- (void)setRecvTime:;
- (long long)maxPlayProgress;
- (void)setMaxPlayProgress:;
- (void)setTrigger:;
- (id)trigger;
- (void).cxx_destruct;
- (BOOL)didShow;
@end
