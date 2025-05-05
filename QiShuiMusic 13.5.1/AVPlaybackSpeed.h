@interface AVPlaybackSpeed : NSObject
@property (nonatomic) float rate;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedNumericName;
- (BOOL)isSynthesized;
- (float)rate;
- (id)localizedName;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)internalDescription;
- (id)description;
- (id)compactLocalizedName;
- (id)initWithRate:localizedName:;
- (id)initWithRate:localizedName:synthesized:;
- (id)localizedNumericName;
+ (id)systemDefaultSpeeds;
+ (id)_rateFormattedAsString:;
@end
