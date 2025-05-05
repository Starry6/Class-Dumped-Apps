@interface BKSIAPDefaults : BSAbstractDefaultDomain
@property (nonatomic) NSString videoTVOutSystem;
@property (nonatomic) NSString videoTVOutSignal;
@property (nonatomic) NSString videoTVOutReservedForIPodOut;
@property (nonatomic) NSString videoTVOutReservedForRemoteUI;
- (id)init;
- (void)_bindAndRegisterDefaults;
@end
