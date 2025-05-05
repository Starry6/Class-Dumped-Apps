@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution
@property (nonatomic) BKSHIDEventDisplay display;
@property (nonatomic) BKSHIDEventDeferringEnvironment environment;
@property (nonatomic) q versionedPID;
@property (nonatomic) NSInteger pid;
@property (nonatomic) BKSHIDEventDeferringToken token;
@property (nonatomic) BKSHIDEventDispatchingTarget dispatchingTarget;
@property (nonatomic) NSString processDescription;
- (id)init;
- (void)setEnvironment:;
- (void)setVersionedPID:;
- (void)setDisplay:;
- (void)setToken:;
- (void)setProcessDescription:;
- (void)setDispatchingTarget:;
- (void)setPid:;
- (id)copyWithZone:;
+ (id)new;
@end
