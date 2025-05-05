@interface AVSemanticStyle : NSObject
@property (nonatomic) float subjectBias;
@property (nonatomic) float toneBias;
@property (nonatomic) float sceneBias;
@property (nonatomic) float warmthBias;
- (float)subjectBias;
- (float)warmthBias;
- (unsigned long long)hash;
- (id)debugDescription;
- (float)sceneBias;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithToneBias:warmthBias:;
- (float)toneBias;
+ (id)semanticStyleWithToneBias:warmthBias:;
+ (id)identityStyle;
@end
