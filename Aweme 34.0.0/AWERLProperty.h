@interface AWERLProperty : NSObject
@property (nonatomic) AWERLAttribute attribute;
@property (nonatomic) NSObject value;
- (id)value;
- (id)attribute;
- (unsigned long long)hash;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setAttribute:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)propertyWithAttribute:value:;
@end
