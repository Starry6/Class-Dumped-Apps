@interface CATProperty : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString instanceVariableName;
@property (nonatomic) q type;
@property (nonatomic) # objectClass;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL nonAtomic;
@property (nonatomic) q association;
@property (nonatomic) : customGetterSelector;
@property (nonatomic) : customSetterSelector;
@property (nonatomic) BOOL weakReference;
- (BOOL)isReadOnly;
- (id)init;
- (Class)objectClass;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (long long)association;
- (BOOL)isNonAtomic;
- (id)initWithName:attributes:;
- (id)instanceVariableName;
- (SEL)customGetterSelector;
- (SEL)customSetterSelector;
- (BOOL)isWeakReference;
+ (id)propertiesForClass:;
+ (id)propertiesForProtocol:;
@end
