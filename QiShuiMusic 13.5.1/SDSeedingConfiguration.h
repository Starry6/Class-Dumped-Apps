@interface SDSeedingConfiguration : NSObject
@property (nonatomic) q seedProgram;
@property (nonatomic) NSString assetAudience;
@property (nonatomic) NSString catalog;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setCatalog:;
- (id)catalog;
- (void)setAssetAudience:;
- (id)initWithCoder:;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)assetAudience;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithBetaProgram:;
- (long long)seedProgram;
- (void)setSeedProgram:;
+ (id)currentConfiguration;
+ (BOOL)supportsSecureCoding;
+ (id)nullConfiguration;
@end
