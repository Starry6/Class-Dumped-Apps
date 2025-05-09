@interface SFPairedUnlockDailyEvent : NSObject
@property (nonatomic) q successfulAttempts;
@property (nonatomic) q failedAttempts;
@property (nonatomic) q totalAttempts;
@property (nonatomic) q passcodeUnlocks;
@property (nonatomic) q totalUnlocks;
@property (nonatomic) BOOL phoneAutoUnlockEnabled;
@property (nonatomic) NSString phoneHardwareModel;
@property (nonatomic) NSString phoneSoftwareVersion;
@property (nonatomic) NSDictionary eventPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventPayload;
- (void).cxx_destruct;
- (void)submitEvent;
- (BOOL)phoneAutoUnlockEnabled;
- (void)setPhoneAutoUnlockEnabled:;
- (long long)successfulAttempts;
- (void)setSuccessfulAttempts:;
- (long long)failedAttempts;
- (void)setFailedAttempts:;
- (long long)totalAttempts;
- (void)setTotalAttempts:;
- (long long)passcodeUnlocks;
- (void)setPasscodeUnlocks:;
- (long long)totalUnlocks;
- (void)setTotalUnlocks:;
- (id)phoneHardwareModel;
- (void)setPhoneHardwareModel:;
- (id)phoneSoftwareVersion;
- (void)setPhoneSoftwareVersion:;
+ (id)eventName;
@end
