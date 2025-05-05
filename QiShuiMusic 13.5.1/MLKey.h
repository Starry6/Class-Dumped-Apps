@interface MLKey : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString scope;
- (id)scope;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithKeyName:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)scopedTo:;
- (id)deletingPrefixingScope:;
- (id)initWithKeyName:scope:;
- (BOOL)hasGlobalScope;
- (BOOL)hasSameNameAsKey:;
+ (BOOL)supportsSecureCoding;
@end
