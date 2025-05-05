@interface FigCaptureSemanticStyle : NSObject
@property (nonatomic) float toneBias;
@property (nonatomic) float mappedToneBias;
@property (nonatomic) float warmthBias;
@property (nonatomic) float mappedWarmthBias;
@property (nonatomic) BOOL identity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (float)warmthBias;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isIdentity;
- (float)toneBias;
- (float)mappedToneBias;
- (float)mappedWarmthBias;
+ (BOOL)supportsSecureCoding;
+ (id)semanticStyleWithToneBias:warmthBias:;
+ (id)identityStyle;
@end
