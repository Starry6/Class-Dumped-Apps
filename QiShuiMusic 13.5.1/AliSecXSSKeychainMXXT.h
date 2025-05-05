@interface AliSecXSSKeychainMXXT : NSObject
+ (id)accountsForService:;
+ (id)passwordForService:account:;
+ (id)passwordForService:account:error:;
+ (BOOL)deletePasswordForService:account:;
+ (BOOL)deletePasswordForService:account:error:;
+ (BOOL)setPassword:forService:account:;
+ (BOOL)setPassword:forService:account:error:;
+ (id)accessibilityType;
+ (void)setAccessibilityType:;
@end
