@interface AWELiveStickerSubscriberResponseModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSNumber appointmentId;
@property (nonatomic) NSString appointmentIdStr;
@property (nonatomic) q total;
@property (nonatomic) NSMutableArray userList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userList;
- (id)appointmentId;
- (void)setUserList:;
- (void)setAppointmentId:;
- (id)appointmentIdStr;
- (void)setAppointmentIdStr:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
