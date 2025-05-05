@interface ECHeaderAuthenticationResultStatement : NSObject
@property (nonatomic) NSString method;
@property (nonatomic) NSString result;
@property (nonatomic) NSString reason;
@property (nonatomic) NSArray properties;
- (id)result;
- (id)method;
- (id)reason;
- (id)properties;
- (void).cxx_destruct;
- (id)initWithMethod:result:reason:properties:;
- (id)valueForFullProperty:;
- (id)valueForPropertyType:property:;
- (id)_valueForPropertyPassingTest:;
@end
