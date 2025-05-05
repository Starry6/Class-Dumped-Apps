@interface MonzaV4_1Input : NSObject
@property (nonatomic) ^{__CVBuffer=} inputImage;
@property (nonatomic) NSSet featureNames;
- (void)dealloc;
- (id)featureValueForName:;
- (id)featureNames;
- (id)inputImage;
- (void)setInputImage:;
- (id)initWithInputImage:;
- (id)initWithInputImageFromCGImage:error:;
- (id)initWithInputImageAtURL:error:;
- (BOOL)setInputImageWithCGImage:error:;
- (BOOL)setInputImageWithURL:error:;
@end
