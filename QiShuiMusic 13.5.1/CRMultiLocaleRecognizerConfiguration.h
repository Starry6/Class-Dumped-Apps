@interface CRMultiLocaleRecognizerConfiguration : CRRecognizerConfiguration
@property (nonatomic) NSOrderedSet languages;
- (id)languages;
- (void).cxx_destruct;
- (id)initWithImageReaderOptions:error:;
- (id)initV1DefaultConfigWithOptions:;
- (id)initV2DefaultConfigWithOptions:;
- (id)initV3DefaultConfigWithOptions:;
- (id)textFeatureFilter;
@end
