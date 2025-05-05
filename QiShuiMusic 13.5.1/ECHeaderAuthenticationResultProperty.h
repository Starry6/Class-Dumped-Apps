@interface ECHeaderAuthenticationResultProperty : NSObject
@property (nonatomic) NSString fullProperty;
@property (nonatomic) NSString propertyType;
@property (nonatomic) NSString property;
@property (nonatomic) NSString value;
- (id)property;
- (id)propertyType;
- (void).cxx_destruct;
- (id)value;
- (id)initWithPropertyType:property:value:;
- (id)fullProperty;
@end
