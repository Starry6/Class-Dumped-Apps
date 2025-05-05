@interface iconclassificationInput : NSObject
@property (nonatomic) ^{__CVBuffer=} image_Placeholder;
@property (nonatomic) NSSet featureNames;
- (void)dealloc;
- (id)featureValueForName:;
- (id)featureNames;
- (id)initWithImage_Placeholder:;
- (id)initWithImage_PlaceholderFromCGImage:error:;
- (id)initWithImage_PlaceholderAtURL:error:;
- (BOOL)setImage_PlaceholderWithCGImage:error:;
- (BOOL)setImage_PlaceholderWithURL:error:;
- (id)image_Placeholder;
- (void)setImage_Placeholder:;
@end
