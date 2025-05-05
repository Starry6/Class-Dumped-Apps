@interface SecXPCUtils : NSObject
+ (BOOL)clientCanEditPreferenceOwnership;
+ (id)copySigningIdentifier:;
+ (id)copyApplicationIdentifierFromSelf;
+ (id)copyApplicationIdentifierFromConnection:;
+ (id)copyApplicationIdentifier;
@end
