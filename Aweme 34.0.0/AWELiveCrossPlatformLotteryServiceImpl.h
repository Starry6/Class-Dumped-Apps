@interface AWELiveCrossPlatformLotteryServiceImpl : NSObject
@property (nonatomic) AWELiveCrossPlatformLotteryRtsHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDIContext:;
- (void)componentUnmountRts;
- (void)lotteryShowCompleted:;
- (void)lotteryTempStateShowWithStrategy:duration:;
- (void)lotteryNormalStateShow;
- (void)createLotteryWithLotteryInfo:config:;
- (id)getCurrentLotteryInfo;
- (void)updateLotteryConfig:;
- (void)updateLiveCommunityParams:;
- (void)lotteryDidClick;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
