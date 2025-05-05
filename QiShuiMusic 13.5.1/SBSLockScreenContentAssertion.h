@interface SBSLockScreenContentAssertion : NSObject
@property (nonatomic) NSString slot;
@property (nonatomic) NSString identifier;
@property (nonatomic) @ configurationObject;
@property (nonatomic) SBSLockScreenContentAction action;
@property (nonatomic) @? errorHandler;
- (id)slot;
- (void)dealloc;
- (id)identifier;
- (id)action;
- (void)setAction:;
- (void)setSlot:;
- (unsigned long long)type;
- (BOOL)_supportsReacquisition;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setIdentifier:;
- (id)_errorHandler;
- (id)initWithType:slot:identifier:configurationObject:errorHandler:;
- (void)_acquireAssertionWithType:slot:identifier:configurationObject:;
- (id)configurationObject;
- (void)setConfigurationObject:;
- (void)_setErrorHandler:;
+ (id)acquireContentProviderAssertionForType:slot:identifier:errorHandler:;
+ (id)acquireContentProviderAssertionForType:slot:identifier:configurationObject:errorHandler:;
+ (BOOL)_isRestrictedDevice;
@end
