@interface AWEIMAudioPlayStatusObserver : NSObject
@property (nonatomic) Q status;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double currentTime;
@property (nonatomic) NSString originAudioMsgObserverID;
@property (nonatomic) NSString quotedAudioMsgObserverID;
- (id)originAudioMsgObserverID;
- (void)setOriginAudioMsgObserverID:;
- (id)quotedAudioMsgObserverID;
- (void)setQuotedAudioMsgObserverID:;
- (void)setCurrentTime:;
- (void)setStartTime:;
- (double)endTime;
- (double)currentTime;
- (void)setStatus:;
- (void)setEndTime:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (double)startTime;
@end
