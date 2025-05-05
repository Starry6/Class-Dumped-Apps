@interface BDUGPushMuteStatus : NSObject
@property (nonatomic) q isMuted;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
- (void)mapFromJSON:;
- (id)initWithJSON:;
- (void)setStartTime:;
- (long long)isMuted;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (void)setIsMuted:;
@end
