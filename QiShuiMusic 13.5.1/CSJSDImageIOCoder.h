@interface CSJSDImageIOCoder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateIncrementalData:finished:;
- (BOOL)canDecodeFromData:;
- (BOOL)canEncodeToFormat:;
- (BOOL)canIncrementalDecodeFromData:;
- (id)decodedImageWithData:options:;
- (id)encodedDataWithImage:format:options:;
- (id)incrementalDecodedImageWithOptions:;
- (id)initIncrementalWithOptions:;
- (void)dealloc;
- (void)didReceiveMemoryWarning:;
+ (id)createBitmapPDFWithData:pageNumber:targetSize:preserveAspectRatio:;
+ (id)sharedCoder;
@end
