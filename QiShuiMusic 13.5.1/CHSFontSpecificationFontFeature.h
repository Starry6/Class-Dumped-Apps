@interface CHSFontSpecificationFontFeature : NSObject
@property (nonatomic) q type;
@property (nonatomic) q selector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)selector;
- (id)initWithBSXPCCoder:;
- (unsigned long long)hash;
- (long long)type;
- (void)encodeWithBSXPCCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:selector:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
