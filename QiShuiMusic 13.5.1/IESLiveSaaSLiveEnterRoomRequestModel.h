@interface IESLiveSaaSLiveEnterRoomRequestModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) NSString sourcePage;
@property (nonatomic) NSString liveReason;
@property (nonatomic) BOOL isLogin;
@property (nonatomic) NSString fromUserID;
@property (nonatomic) BOOL hasPreEntered;
@property (nonatomic) NSString enterSourceExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildRequestParams;
- (id)initWithRoomModel:;
+ (id)initWithRoomModel:context:sourcePage:;
@end
