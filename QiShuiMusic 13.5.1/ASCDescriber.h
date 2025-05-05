@interface ASCDescriber : NSObject
@property (nonatomic) <NSObject> object;
@property (nonatomic) NSMutableArray properties;
- (unsigned long long)hash;
- (id)initWithObject:;
- (id)properties;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (BOOL)isEqual:;
- (void)addBool:withName:;
- (void)addInteger:withName:;
- (void)addUnsignedInteger:withName:;
- (void)addInt64:withName:;
- (void)addUInt64:withName:;
- (void)addDouble:withName:;
- (void)addSensitiveObject:withName:;
- (void)addObject:withName:;
- (id)describeObject;
- (id)describeProperties;
- (id)finalizeDescription;
+ (id)nilObject;
@end
