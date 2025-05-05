@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData
@property (nonatomic) STTelephonyStatusDomainSIMInfo SIMOneInfo;
@property (nonatomic) STTelephonyStatusDomainSIMInfo SIMTwoInfo;
@property (nonatomic) BOOL cellularRadioCapabilityEnabled;
@property (nonatomic) BOOL dualSIMEnabled;
@property (nonatomic) BOOL radioModuleDead;
@property (nonatomic) BOOL usingStewieForSOS;
@property (nonatomic) BOOL inactiveSOSEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateSIMTwoInfoWithBlock:;
- (void)setInactiveSOSEnabled:;
- (void)setRadioModuleDead:;
- (void)updateSIMOneInfoWithBlock:;
- (void)setSIMOneInfo:;
- (void)setCellularRadioCapabilityEnabled:;
- (BOOL)applyDiff:;
- (void)setSIMTwoInfo:;
- (void)setUsingStewieForSOS:;
- (void)setDualSIMEnabled:;
- (id)copyWithZone:;
@end
