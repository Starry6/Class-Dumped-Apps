@interface UISCompatibilityContext : NSObject
@property (nonatomic) NSArray supportedDisplaySizes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSupportedDisplaySizes:;
- (id)supportedDisplaySizes;
+ (BOOL)supportsBSXPCSecureCoding;
@end
