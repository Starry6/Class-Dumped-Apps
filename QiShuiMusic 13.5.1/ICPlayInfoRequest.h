@interface ICPlayInfoRequest : ICRequestOperation
@property (nonatomic) NSString playerGUID;
@property (nonatomic) NSData SICData;
@property (nonatomic) NSArray sinfs;
@property (nonatomic) NSNumber DSID;
@property (nonatomic) NSNumber contentIdentifier;
@property (nonatomic) NSString subscriptionPlaybackType;
- (void)execute;
- (id)DSID;
- (void)setDSID:;
- (id)contentIdentifier;
- (void)performWithResponseHandler:;
- (void)setContentIdentifier:;
- (void).cxx_destruct;
- (id)initWithRequestContext:;
- (void)setPlayerGUID:;
- (void)setSinfs:;
- (void)setSICData:;
- (id)sinfs;
- (id)_getSinfParamValue:;
- (BOOL)_hasRentalInfo;
- (id)playerGUID;
- (id)SICData;
- (id)subscriptionPlaybackType;
- (void)setSubscriptionPlaybackType:;
@end
