@interface FBSystemShellInitializationContext : NSObject
@property (nonatomic) FBSystemShellInitializationOptions options;
@property (nonatomic) Q lastExitReason;
@property (nonatomic) BOOL bootedDark;
- (id)_initWithOptions:;
- (id)options;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)lastExitReason;
- (BOOL)wasBootedDark;
@end
