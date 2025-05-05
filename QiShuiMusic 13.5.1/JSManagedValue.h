@interface JSManagedValue : NSObject
@property (nonatomic) JSValue value;
- (void)didAddOwner:;
- (id)init;
- (void)dealloc;
- (void)didRemoveOwner:;
- (void)disconnectValue;
- (void).cxx_destruct;
- (id)value;
- (id).cxx_construct;
- (id)initWithValue:;
+ (id)managedValueWithValue:;
+ (id)managedValueWithValue:andOwner:;
@end
