@interface SBSHomeScreenRectangleSilhouette : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithBSXPCCoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)frame;
- (void)encodeWithCoder:;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (double)cornerRadius;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFrame:cornerRadius:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
