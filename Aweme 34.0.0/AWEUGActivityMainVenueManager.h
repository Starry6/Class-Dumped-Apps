@interface AWEUGActivityMainVenueManager : NSObject
@property (nonatomic) NSString activityID;
@property (nonatomic) NSMutableDictionary tabIDMap;
- (id)activitySchema;
- (BOOL)backToMainVenueTabForID:;
- (void)updateTabID:withActivityID:;
- (id)tabIDMap;
- (void)logBackToPageForActivityID:withTabID:result:;
- (BOOL)checkActivitySchema:;
- (id)fallbackSchema;
- (void)setTabIDMap:;
- (id)init;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
+ (id)sharedManager;
@end
