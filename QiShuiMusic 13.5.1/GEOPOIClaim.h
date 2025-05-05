@interface GEOPOIClaim : NSObject
@property (nonatomic) BOOL claimed;
@property (nonatomic) BOOL claimable;
@property (nonatomic) NSURL claimURL;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPOIClaim:;
- (BOOL)isClaimed;
- (BOOL)isClaimable;
- (id)claimURL;
@end
