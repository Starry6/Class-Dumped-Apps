@interface AWELivePaidLiveModel : AWEBaseApiModel
@property (nonatomic) Q paidType;
@property (nonatomic) Q viewRight;
@property (nonatomic) q duration;
@property (nonatomic) q maxPreviewDuration;
@property (nonatomic) AWELiveTicketModel ticketSession;
@property (nonatomic) Q delivery;
@property (nonatomic) BOOL needDeliveryNotice;
@property (nonatomic) NSDictionary privilegeInfoMap;
@property (nonatomic) AWELivePrivilegeInfo vipSubscribePrivilegeInfo;
@property (nonatomic) AWELiveAsyncAuthData asyncAuthData;
- (unsigned long long)paidType;
- (void)setPaidType:;
- (unsigned long long)viewRight;
- (void)setViewRight:;
- (id)vipSubscribePrivilegeInfo;
- (id)ticketSession;
- (long long)maxPreviewDuration;
- (BOOL)needDeliveryNotice;
- (void)setNeedDeliveryNotice:;
- (id)privilegeInfoMap;
- (id)asyncAuthData;
- (void)setMaxPreviewDuration:;
- (void)setTicketSession:;
- (void)setPrivilegeInfoMap:;
- (void)setAsyncAuthData:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (unsigned long long)delivery;
- (void)setDelivery:;
+ (id)ticketSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
