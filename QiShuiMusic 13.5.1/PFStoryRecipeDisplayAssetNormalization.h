@interface PFStoryRecipeDisplayAssetNormalization : NSObject
@property (nonatomic) NSData analysisData;
@property (nonatomic) q version;
@property (nonatomic) double score;
@property (nonatomic) NSDictionary tempTintProperties;
@property (nonatomic) NSDictionary smartToneProperties;
@property (nonatomic) NSDictionary highKeyProperties;
@property (nonatomic) NSDictionary smartColorProperties;
@property (nonatomic) NSString detailedDescription;
- (id)init;
- (double)score;
- (long long)version;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)detailedDescription;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)tempTintProperties;
- (id)smartToneProperties;
- (id)highKeyProperties;
- (id)smartColorProperties;
- (id)initWithAnalysisData:;
- (id)analysisData;
@end
