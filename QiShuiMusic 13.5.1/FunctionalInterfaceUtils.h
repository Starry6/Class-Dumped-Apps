@interface FunctionalInterfaceUtils : NSObject
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterface:;
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterfaceType:nwInterfaceSubtype:;
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterfaceType:;
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterfaceSubtype:;
+ (long long)nwInterfaceTypeForNWFunctionalInterfaceType:;
+ (long long)nwInterfaceSubtypeForNWFunctionalInterfaceType:;
+ (id)stringForFunctionalInterfaceType:;
@end
