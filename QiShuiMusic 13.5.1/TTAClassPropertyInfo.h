@interface TTAClassPropertyInfo : NSObject
@property (nonatomic) ^{objc_property=} property;
@property (nonatomic) NSString name;
@property (nonatomic) Q type;
@property (nonatomic) NSString typeEncoding;
@property (nonatomic) NSString ivarName;
@property (nonatomic) # cls;
@property (nonatomic) NSArray protocols;
@property (nonatomic) : getter;
@property (nonatomic) : setter;
- (Class)cls;
- (id)initWithProperty:;
- (id)property;
- (id)protocols;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)name;
- (id)typeEncoding;
- (SEL)setter;
- (SEL)getter;
- (id)ivarName;
@end
