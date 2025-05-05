@interface TULabeledHandle : NSObject
@property (nonatomic) TUHandle handle;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL isSuggested;
- (id)init;
- (id)handle;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSuggested;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithHandle:label:isSuggested:;
- (BOOL)isEqualToLabeledHandle:;
+ (BOOL)supportsSecureCoding;
@end
