@interface CNCFPreferencesPrimitiveUserDefaults : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)primitiveObjectForKey:;
- (BOOL)primitiveBoolValueForKey:keyExists:;
- (void)primitiveRemoveObjectForKey:;
- (void)setupAutosync;
- (long long)primitiveIntegerValueForKey:keyExists:;
- (void)setPrimitiveObject:forKey:;
- (id)initWithApplicationID:;
- (BOOL)synchronize;
- (id)CFApplicationID;
- (void).cxx_destruct;
@end
