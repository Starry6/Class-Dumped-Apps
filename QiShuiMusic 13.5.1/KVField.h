@interface KVField : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)hash;
- (id)label;
- (void).cxx_destruct;
- (long long)fieldType;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (BOOL)isEqualToField:;
- (id)JSONWithIndent:;
- (id)initWithBuffer:root:;
- (long long)localeType;
+ (id)fieldWithBuffer:root:;
@end
