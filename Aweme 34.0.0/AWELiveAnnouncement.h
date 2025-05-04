@interface AWELiveAnnouncement : AWEBaseApiModel
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString announceType;
@property (nonatomic) BOOL isSingleAnnounce;
@property (nonatomic) NSString appointmentId;
@property (nonatomic) NSArray productInfos;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)appointmentId;
- (void)setAppointmentId:;
- (id)productInfos;
- (void)setProductInfos:;
- (id)announceType;
- (void)setAnnounceType:;
- (BOOL)isSingleAnnounce;
- (id)schema;
- (void)setSchema:;
- (void)setStatus:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (int)status;
+ (id)productInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
