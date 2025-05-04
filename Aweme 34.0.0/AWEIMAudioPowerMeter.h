@interface AWEIMAudioPowerMeter : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) NSArray innerLevels;
@property (nonatomic) NSArray levels;
@property (nonatomic) double currentTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopRecord;
- (void)startRecord;
- (void)processWithBuffer:;
- (void)processSilence;
- (id)p_calculatePowersWithData:strideFrames:length:;
- (id)innerLevels;
- (void)setInnerLevels:;
- (void)setCurrentTime:;
- (id)init;
- (double)currentTime;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)levels;
+ (id)channelLevelsForChannel:inLevelList:;
@end
