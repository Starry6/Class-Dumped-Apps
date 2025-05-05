@interface KVProvisionalResourceManager : NSObject
@property (nonatomic) NSDate expirationDate;
- (id)init;
- (void)setExpirationDate:;
- (id)expirationDate;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithResourceName:lifespan:activationBlock:deactivationBlock:serializeOperations:;
- (long long)activateWithError:operationBlock:;
- (long long)deactivateWithError:;
- (void)activateAsyncWithCompletion:;
- (void)_setExpirationTimer;
@end
