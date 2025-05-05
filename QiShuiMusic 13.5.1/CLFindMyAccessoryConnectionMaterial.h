@interface CLFindMyAccessoryConnectionMaterial : NSObject
@property (nonatomic) NSData address;
@property (nonatomic) NSData ltk;
@property (nonatomic) NSNumber primaryIndex;
@property (nonatomic) NSNumber secondaryIndex;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)address;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAddress:ltk:;
- (id)initWithAddress:ltk:primaryIndex:secondaryIndex:;
- (BOOL)isEqualToMaterial:;
- (id)dictionaryDescription;
- (id)ltk;
- (id)primaryIndex;
- (id)secondaryIndex;
+ (BOOL)supportsSecureCoding;
@end
