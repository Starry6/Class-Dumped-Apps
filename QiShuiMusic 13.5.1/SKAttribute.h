@interface SKAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q type;
- (id)init;
- (id)initWithName:type:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (BOOL)isEqualToAttribute:;
- (id)getNameString;
+ (BOOL)supportsSecureCoding;
+ (id)attributeWithName:type:;
@end
