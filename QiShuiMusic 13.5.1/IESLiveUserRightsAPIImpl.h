@interface IESLiveUserRightsAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)monitor_requestFansClubEntryInfoWithDuration:error:userID:room:;
- (void)monitor_requestUserFansClubInfoWithDuration:error:roomID:userID:;
- (void)requestEcomFansClubEntryInfoWithRoom:completion:;
- (void)requestFansClubEntryInfoWithRoom:userID:completion:;
- (void)requestUserFansClubInfoWithRoom:userID:secUserID:completion:;
@end
