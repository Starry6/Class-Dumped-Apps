@interface ASDInstallationEvent : NSObject
@property (nonatomic) q phase;
@property (nonatomic) q terminalPhase;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) q appType;
@property (nonatomic) q source;
@property (nonatomic) q installType;
- (long long)installType;
- (long long)phase;
- (long long)appType;
- (id)itemID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)source;
- (id)bundleID;
- (id)copyWithZone:;
- (id)initWithPhase:terminalPhase:bundleID:itemID:appType:installType:;
- (long long)terminalPhase;
+ (BOOL)supportsSecureCoding;
@end
