@interface NLModelConfiguration : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString language;
@property (nonatomic) Q revision;
- (id)language;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)options;
- (long long)type;
- (void).cxx_destruct;
- (unsigned long long)revision;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)embeddingData;
- (id)initWithModelType:options:error:;
- (id)embeddingURL;
- (id)embeddingModel;
+ (BOOL)supportsSecureCoding;
+ (id)defaultModelConfigurationForType:options:error:;
+ (id)defaultModelConfigurationForType:;
+ (unsigned long long)currentRevisionForType:;
+ (id)supportedRevisionsForType:;
@end
