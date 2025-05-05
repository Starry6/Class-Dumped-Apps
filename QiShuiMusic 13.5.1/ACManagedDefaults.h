@interface ACManagedDefaults : NSObject
- (id)valueForManagedDefault:;
- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:;
- (void)setValue:forManagedDefault:;
+ (id)sharedInstance;
@end
