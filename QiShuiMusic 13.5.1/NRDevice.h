@interface NRDevice : NSObject
@property (nonatomic) NSUUID pairingID;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (BOOL)supportsCapability:;
- (void)encodeWithCoder:;
- (id)valueForProperty:;
- (id)objectForKeyedSubscript:;
- (void)_setValue:forProperty:;
- (void).cxx_destruct;
- (id)description;
- (id)pairingID;
- (id)initWithQueue:;
- (void)invalidate;
- (BOOL)setValue:forProperty:;
- (void)addPropertyObserver:forPropertyChanges:;
- (void)removePropertyObserver:forPropertyChanges:;
- (BOOL)archived;
- (BOOL)canMigrate;
- (id)migrationError;
- (BOOL)migrationConfirmed;
- (id)initWithRegistry:diff:pairingID:notify:;
- (id)propertyNames;
- (void)registerForPropertyChanges:withBlock:;
- (void)unregisterForPropertyChanges:withBlock:;
+ (BOOL)supportsSecureCoding;
@end
