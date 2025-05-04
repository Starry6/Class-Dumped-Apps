@interface AWECommentFeedFastCommentManager : NSObject
@property (nonatomic) NSArray recordShowedAwemeIDs;
@property (nonatomic) NSArray recordExeuntAwemeIDs;
@property (nonatomic) q currentTotalExeuntCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)settingsConfig;
- (id)keyRecordShowedAwemeIDs;
- (id)keyRecordExeuntAwemeIDs;
- (id)keyCurrentTotalExeuntCount;
- (long long)currentTotalExeuntCount;
- (long long)maxTotalExeuntCount;
- (id)recordShowedAwemeIDs;
- (id)recordExeuntAwemeIDs;
- (long long)exeuntMaxAppearNoInteractionCount;
- (long long)exeuntMaxDisappearCount;
- (void)setRecordShowedAwemeIDs:;
- (void)setRecordExeuntAwemeIDs:;
- (void)setCurrentTotalExeuntCount:;
- (long long)lowCommentThreshold;
- (BOOL)shouldShowWithModel:referString:;
- (id)defaultInputPlaceholder;
- (BOOL)recordEnableExeuntWithAweme:;
- (void)resetExeunt;
+ (id)sharedManager;
@end
