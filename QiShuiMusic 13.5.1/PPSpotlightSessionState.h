@interface PPSpotlightSessionState : NSObject
@property (nonatomic) NSMutableArray seenSpotlightIds;
@property (nonatomic) NSMutableArray seenBundleIds;
@property (nonatomic) NSMutableArray engagedSpotlightIds;
@property (nonatomic) NSMutableArray engagedBundleIds;
- (id)init;
- (id)engagedBundleIds;
- (id)seenBundleIds;
- (id)engagedSpotlightIds;
- (void)setEngagedBundleIds:;
- (void)setSeenSpotlightIds:;
- (void)setEngagedSpotlightIds:;
- (void).cxx_destruct;
- (void)setSeenBundleIds:;
- (id)seenSpotlightIds;
@end
