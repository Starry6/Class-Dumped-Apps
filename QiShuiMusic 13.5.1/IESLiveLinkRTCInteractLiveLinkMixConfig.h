@interface IESLiveLinkRTCInteractLiveLinkMixConfig : NSObject
@property (nonatomic) NSString publicStreamId;
@property (nonatomic) NSInteger preMixerLayerId;
@property (nonatomic) BOOL fixDeadlock;
- (int)preMixerLayerId;
- (void)setFixDeadlock:;
- (BOOL)fixDeadlock;
- (id)publicStreamId;
- (void)setPreMixerLayerId:;
- (void)setPublicStreamId:;
- (void).cxx_destruct;
@end
