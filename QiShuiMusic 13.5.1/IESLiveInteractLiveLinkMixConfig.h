@interface IESLiveInteractLiveLinkMixConfig : NSObject
@property (nonatomic) NSString publicStreamId;
@property (nonatomic) BOOL fixDeadlock;
- (void)setFixDeadlock:;
- (BOOL)fixDeadlock;
- (id)publicStreamId;
- (void)setPublicStreamId:;
- (void).cxx_destruct;
@end
