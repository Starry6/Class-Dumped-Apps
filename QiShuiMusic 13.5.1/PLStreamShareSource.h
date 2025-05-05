@interface PLStreamShareSource : NSObject
@property (nonatomic) NSData mediaData;
@property (nonatomic) NSString fileExtension;
@property (nonatomic) NSURL mediaURL;
@property (nonatomic) PFVideoComplement videoComplement;
@property (nonatomic) q mediaType;
- (id)photoLibrary;
- (long long)mediaType;
- (void)setMediaType:;
- (id)serializedDictionary;
- (id)mediaURL;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)fileExtension;
- (void)setFileExtension:;
- (void)setMediaURL:;
- (id)videoComplement;
- (void)setVideoComplement:;
- (void)_cleanupIfNeededMediaAtURL:;
- (void)cleanupResources;
- (id)mediaData;
- (void)setMediaData:;
@end
