@interface IESECFansClubService : NSObject
@property (nonatomic) IESECRelationFansClubInfoResponse fansClubInfoResponse;
@property (nonatomic) NSString userId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fansClubInfoResponse;
- (void)requestFansClubInfo;
- (void)requestFansClubInfoFromRemote:;
- (void)setFansClubInfoResponse:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
@end
