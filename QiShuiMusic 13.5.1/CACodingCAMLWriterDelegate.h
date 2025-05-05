@interface CACodingCAMLWriterDelegate : NSObject
@property (nonatomic) NSString imageFormat;
@property (nonatomic) NSDictionary imageEncodeOptions;
@property (nonatomic) BOOL skipHiddenLayers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)imageFormat;
- (id)CAMLWriter:typeForObject:;
- (id)CAMLWriter:URLForResource:;
- (BOOL)CAMLWriter:shouldEncodeObject:;
- (id)initWithResourceDir:;
- (void)setImageFormat:;
- (id)imageEncodeOptions;
- (void)setImageEncodeOptions:;
- (BOOL)skipHiddenLayers;
- (void)setSkipHiddenLayers:;
@end
