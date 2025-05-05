@interface ToygerConfig : NSObject
@property (nonatomic) ToygerAlgorithmConfig algorithm;
@property (nonatomic) ToygerUploadConfig upload;
@property (nonatomic) BOOL autoComplete;
@property (nonatomic) NSInteger optionalImageCount;
- (BOOL)autoComplete;
- (int)optionalImageCount;
- (void)setAutoComplete:;
- (void)setOptionalImageCount:;
- (id)algorithm;
- (id)initWithConfig:;
- (void)setAlgorithm:;
- (void).cxx_destruct;
- (id)upload;
- (void)setUpload:;
@end
