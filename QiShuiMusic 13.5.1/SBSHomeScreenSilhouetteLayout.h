@interface SBSHomeScreenSilhouetteLayout : NSObject
@property (nonatomic) NSArray icons;
@property (nonatomic) SBSHomeScreenRectangleSilhouette dock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dock;
- (id)init;
- (id)initWithBSXPCCoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)icons;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIcons:dock:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
