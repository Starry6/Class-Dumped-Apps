@interface MADServicePrivate : MADService
+ (id)serviceName;
+ (id)serverProtocol;
+ (void)configureServerInterface:;
+ (id)allowedClasses;
@end
