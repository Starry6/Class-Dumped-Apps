@interface CLClientManagerAuthorizationContext : NSObject
@property (nonatomic) Q staticServiceMask;
@property (nonatomic) Q effectiveServiceMask;
@property (nonatomic) Q provisionalServiceMask;
@property (nonatomic) NSInteger transientAwareRegistrationResult;
@property (nonatomic) NSInteger registrationResult;
@property (nonatomic) BOOL authorizedForWidgetUpdates;
@property (nonatomic) NSInteger inUseLevel;
- (int)inUseLevel;
- (int)transientAwareRegistrationResult;
- (id)initWithInUseLevel:registrationResult:transientAwareRegistrationResult:serviceMaskTuple:authorizedForWidgetUpdates:;
- (BOOL)isAuthorizedForServiceTypeMask:;
- (int)registrationResult;
- (BOOL)isNonProvisionallyAuthorizedForServiceTypeMask:;
- (BOOL)inUseLevelIsAtLeast:;
- (id)authorizationContextByANDingServiceMaskTuple:;
- (BOOL)isNonProvisionallyAuthorizedForServiceType:;
- (id)description;
- (unsigned long long)effectiveServiceMask;
- (unsigned long long)staticServiceMask;
- (BOOL)authorizedForWidgetUpdates;
- (BOOL)isAuthorizedForServiceType:;
- (BOOL)isEqual:;
- (unsigned long long)provisionalServiceMask;
@end
