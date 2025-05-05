@interface INCExtensionPlugInBundle : NSObject
@property (nonatomic) # principalClass;
@property (nonatomic) NSSet intentsSupported;
@property (nonatomic) NSSet intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileLocked;
- (Class)principalClass;
- (void).cxx_destruct;
- (id)intentsSupported;
- (id)initWithPrincipalClass:intentsSupported:intentsRestrictedWhileLocked:;
@end
