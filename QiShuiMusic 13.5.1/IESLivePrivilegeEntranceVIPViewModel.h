@interface IESLivePrivilegeEntranceVIPViewModel : NSObject
@property (nonatomic) HTSLiveMemberEntranceInfo memberEntranceInfo;
@property (nonatomic) HTSLiveImage vipIcon;
@property (nonatomic) NSString scheme;
@property (nonatomic) q entranceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)vipIcon;
- (id)buildCommonParams;
- (void)didReceiveEntranceUpdateMessage:;
- (void)didSetAttachingDIContext;
- (long long)entranceType;
- (id)initWithEntranceType:;
- (id)memberEntranceInfo;
- (void)setEntranceType:;
- (void)setMemberEntranceInfo:;
- (void)setVipIcon:;
- (void)trackMemberEntranceClick;
- (void)trackMemberEntranceShow;
- (void)trackMemberEntranceUpdate;
- (void)setScheme:;
- (id)scheme;
- (void).cxx_destruct;
@end
