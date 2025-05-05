@interface MPServerObjectDatabaseImportRequest : NSObject
@property (nonatomic) NSDate assetURLExpirationDate;
@property (nonatomic) NSDate playbackAuthorizationTokenHalfLifeDate;
@property (nonatomic) @ payload;
@property (nonatomic) ICUserIdentity userIdentity;
@property (nonatomic) NSDate expirationDate;
- (id)payload;
- (void)setPayload:;
- (void)setExpirationDate:;
- (id)expirationDate;
- (id)userIdentity;
- (void).cxx_destruct;
- (void)setUserIdentity:;
- (id)_initWithPayload:;
- (id)assetURLExpirationDate;
- (id)playbackAuthorizationTokenHalfLifeDate;
@end
