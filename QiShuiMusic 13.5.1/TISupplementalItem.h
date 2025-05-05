@interface TISupplementalItem : NSObject
@property (nonatomic) Q identifier;
- (id)init;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToSupplementalItem:;
+ (BOOL)supportsSecureCoding;
@end
