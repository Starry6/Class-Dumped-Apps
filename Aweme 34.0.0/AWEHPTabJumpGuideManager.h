@interface AWEHPTabJumpGuideManager : NSObject
@property (nonatomic) NSDictionary ambienceHandlers;
@property (nonatomic) AWEFeedTabJumpStorageManager storageManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowHPTabJumpGuideWithModel:withReferString:withIdentification:;
- (void)setHPTabJumpGuideComponent:withModel:withReferString:;
- (id)supportAmbienceReferStrings;
- (void)setAmbienceHandlers:;
- (id)ambienceHandlers;
- (void)recoverHPTabJumpGuideIfNeedWithIdentification:withModel:withReferString:;
- (id)canShowHPTabJumpGuideWithModel:withReferString:;
- (id)init;
- (void)setStorageManager:;
- (id)storageManager;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
