@interface INHelperServiceAccessSpecifier : NSObject
@property (nonatomic) Q accessLevel;
@property (nonatomic) NSString associatedAppBundleIdentifier;
- (id)debugDescription;
- (unsigned long long)accessLevel;
- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)initWithAccessLevel:associatedAppBundleIdentifier:;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierAppropriateForXPCConnection:;
@end
