@interface WFType : NSObject
@property (nonatomic) NSString typeDescription;
@property (nonatomic) NSString string;
- (id)string;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)typeDescription;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)conformsToType:;
- (BOOL)isEqualToType:;
- (BOOL)isEqualToUTType:;
- (BOOL)conformsToString:;
- (BOOL)conformsToUTType:;
- (BOOL)conformsToTypes:;
- (BOOL)conformsToClass:;
- (BOOL)isEqualToClass:;
+ (BOOL)supportsSecureCoding;
@end
