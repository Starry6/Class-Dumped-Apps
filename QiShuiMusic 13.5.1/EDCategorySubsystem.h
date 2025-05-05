@interface EDCategorySubsystem : NSObject
@property (nonatomic) EDPETInteractionEventLog petLog;
@property (nonatomic) EDBiomeInteractionEventLog biomeLog;
@property (nonatomic) EDDifferentialPrivacyReporter differentialPrivacyReporter;
@property (nonatomic) EDInteractionLogger interactionLogger;
- (void)scheduleRecurringActivity;
- (void)_schedulePETSubmissionActivityForLog:;
- (id)petLog;
- (id)interactionLogger;
- (id)differentialPrivacyReporter;
- (void).cxx_destruct;
- (id)biomeLog;
- (id)initWithPersistence:userProfileProvider:vipManager:sourceApplicationBundleIdentifier:;
@end
