@interface AWEIMSilverWingTrackComponent : AWEIMComponentBase
@property (nonatomic) NSString sessionId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (id)extraParamsAddToSendMessageTrackWithCid:;
- (id)extraParamsAddToSendMessageResponseTrackWithCid:;
- (void)setSessionId:;
- (id)sessionId;
- (void).cxx_destruct;
- (id)getSessionId;
+ (BOOL)canCreateComponentWithContext:;
@end
