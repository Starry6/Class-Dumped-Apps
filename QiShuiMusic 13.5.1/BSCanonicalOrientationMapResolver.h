@interface BSCanonicalOrientationMapResolver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTargetOrientation:currentOrientation:;
- (long long)interfaceOrientationForSupportedOrientations:preferredOrientation:;
- (id)initWithBSXPCCoder:;
- (id)debugDescription;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
