@interface LASecAccessControl : NSObject
+ (id)denyAllACL;
+ (id)constraintsFromACL:;
+ (id)serializeACL:;
+ (id)deserializeACL:;
+ (id)allowAllACL;
@end
