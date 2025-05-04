@interface AWELiveCrossPlatformAfterLiveAudienceServiceImpl : NSObject
@property (nonatomic) AWELiveCrossPlatformAfterLiveAudienceRtsHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDIContext:;
- (id)relaxComponentInit;
- (void)updateWithCountTime:;
- (void)updateWithInitState:params:room:performanceLogger:closeVCBlock:;
- (void)updateWithRoom:;
- (void)userServiceLog:user:room:extra:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
@end
