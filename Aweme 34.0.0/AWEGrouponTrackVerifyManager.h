@interface AWEGrouponTrackVerifyManager : NSObject
@property (nonatomic) NSMutableDictionary eventVerifyGroup;
@property (nonatomic) BOOL hasFetchedSettings;
- (void)fetchSettings;
- (id)verifyEvent:params:complete:;
- (id)trackVerifySettings;
- (BOOL)hasFetchedSettings;
- (id)eventVerifyGroup;
- (void)reportVerifyReulstWithEvent:ruleModel:resultModel:oldParams:;
- (void)setHasFetchedSettings:;
- (BOOL)multithreadingTurn;
- (void)setEventVerifyGroup:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
