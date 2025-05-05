@interface CSJLogRateConfigModel : NSObject
@property (nonatomic) float globalRate;
@property (nonatomic) float classPropertyRate;
@property (nonatomic) float getBiddingToken;
@property (nonatomic) float encryptTrack;
@property (nonatomic) float refreshMaxRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)getBiddingToken;
- (float)classPropertyRate;
- (float)encryptTrack;
- (float)globalRate;
- (float)refreshMaxRate;
- (void)setClassPropertyRate:;
- (void)setEncryptTrack:;
- (void)setGetBiddingToken:;
- (void)setGlobalRate:;
- (void)setRefreshMaxRate:;
- (id)toDictionary;
+ (id)fromDictionary:;
@end
