@interface ASDArcadeService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)removeMetricsForBadgeIDs:replyHandler:;
- (void)removeAllHardwareOfferIDsWithReplyHandler:;
- (void)removeBadgeIDs:replyHandler:;
- (void)addHardwareOfferIDs:replyHandler:;
- (void)allHardwareOfferMetricsWithReplyHandler:;
- (void)allBadgeIDsWithReplyHandler:;
- (void)badgeCountWithReplyHandler:;
- (void)showUpsellForItemID:replyHandler:;
- (void)hardwareOfferCountWithReplyHandler:;
- (void).cxx_destruct;
- (void)allHardwareOffersIDsWithReplyHandler:;
- (void)addBadgeIDs:replyHandler:;
- (void)allBadgeMetricsWithReplyHandler:;
- (void)removeHardwareOfferIDs:replyHandler:;
- (void)removeAllBadgeIDsWithReplyHandler:;
- (void)removeHardwareOfferMetricsForOfferIDs:replyHandler:;
+ (id)interface;
+ (id)defaultService;
@end
