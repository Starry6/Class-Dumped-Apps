@interface AWEFeedSiriDonateServiceImpl : HTSService
@property (nonatomic) BOOL enableSiriDonate;
@property (nonatomic) q countLimit;
@property (nonatomic) BOOL needInteraction;
@property (nonatomic) BOOL needMoreDonation;
@property (nonatomic) NSMutableDictionary interactionRecord;
@property (nonatomic) NSMutableSet playRecod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canDonateToday;
- (BOOL)enableSiriDonateForFeed;
- (void)triggerDonateFromFeedWithAwemeID:;
- (BOOL)enableSiriDonateForFeedWithInteraction;
- (void)triggerDonateFromType:withAwemeID:;
- (BOOL)enableSiriDonateForMoreScene;
- (void)triggerDonateFromSlienSilentPush;
- (id)keyForToday;
- (void)setEnableSiriDonate:;
- (void)setNeedInteraction:;
- (void)setNeedMoreDonation:;
- (BOOL)enableSiriDonate;
- (BOOL)needInteraction;
- (BOOL)needMoreDonation;
- (void)donateWithType:;
- (id)interactionRecord;
- (id)playRecod;
- (void)setInteractionRecord:;
- (void)setPlayRecod:;
- (id)init;
- (void).cxx_destruct;
- (void)setCountLimit:;
- (long long)countLimit;
@end
