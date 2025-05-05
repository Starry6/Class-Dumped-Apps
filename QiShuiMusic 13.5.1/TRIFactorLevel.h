@interface TRIFactorLevel : TRIPBMessage
@property (nonatomic) TRIFactor factor;
@property (nonatomic) BOOL hasFactor;
@property (nonatomic) TRILevel level;
@property (nonatomic) BOOL hasLevel;
- (id)uniqueDataRepresentation;
+ (id)descriptor;
+ (id)hashForFactorLevels:;
@end
