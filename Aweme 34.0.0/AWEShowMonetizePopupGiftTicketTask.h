@interface AWEShowMonetizePopupGiftTicketTask : AWEShowMonetizePopupTask
@property (nonatomic) NSDictionary json;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString containerID;
@property (nonatomic) @? trackParamsHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)setTrackParamsHandler:;
- (id)trackParamsHandler;
- (void)giftTicketWillShow:;
- (id)giftTicketReceiveHandlerEventContainerID:;
- (void)giftTicketDidShow:;
- (void)giftTicket:didClosedForStatus:;
- (id)initWithGiftTicketJson:aweme:containerID:trackParamsHandler:;
- (BOOL)canRun;
- (void)dealloc;
- (void)setContainerID:;
- (void)run;
- (void)cancel;
- (id)containerID;
- (void).cxx_destruct;
- (void)setJson:;
- (id)json;
@end
