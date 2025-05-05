@interface CNSmartPropertyFetcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_cn_executeGetterForRepresentedKeys:;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)_cn_ignorableKeys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
