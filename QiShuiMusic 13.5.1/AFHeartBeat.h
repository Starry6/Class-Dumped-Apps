@interface AFHeartBeat : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDate effectiveDate;
@property (nonatomic) double expirationDuration;
@property (nonatomic) double heartBeatInterval;
@property (nonatomic) Q numberOfHeartBeats;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)expirationDuration;
- (void)dealloc;
- (id)identifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_fire;
- (id)description;
- (id)effectiveDate;
- (void)invalidate;
- (id)initWithIdentifier:queue:effectiveDate:expirationDuration:heartBeatInterval:heartBeatHandler:invalidationHandler:;
- (unsigned long long)numberOfHeartBeats;
- (double)heartBeatInterval;
@end
