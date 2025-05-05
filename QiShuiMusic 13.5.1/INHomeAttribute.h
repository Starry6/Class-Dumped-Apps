@interface INHomeAttribute : NSObject
@property (nonatomic) q type;
@property (nonatomic) q valueType;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)doubleValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)boolValue;
- (long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (long long)valueType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:boolValue:;
- (id)initWithType:doubleValue:;
- (id)initWithType:stringValue:;
- (id)initWithType:valueType:boolValue:doubleValue:stringValue:;
+ (BOOL)supportsSecureCoding;
@end
