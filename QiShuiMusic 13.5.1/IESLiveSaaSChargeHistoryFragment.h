@interface IESLiveSaaSChargeHistoryFragment : IESLiveRoomComponent
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> urlHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (id)initWithRoom:context:;
- (BOOL)isRechargeCapabilityBlocked;
- (void)pr_addMinorRefundItem;
- (void)pr_addRechargeRecordItem;
- (id)urlHandler;
- (void).cxx_destruct;
- (void)setUrlHandler:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
