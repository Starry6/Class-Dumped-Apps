@interface AWEAIClipSimplifyModel : NSObject
@property (nonatomic) Q mediaType;
@property (nonatomic) NSString filePathString;
@property (nonatomic) AVAsset asset;
@property (nonatomic) NSString UUIDString;
- (void)setFilePathString:;
- (id)filePathString;
- (void)generateUUIDStringIfNeeded;
- (id)mediaTypeString;
- (void)setMediaType:;
- (id)UUIDString;
- (unsigned long long)mediaType;
- (id)description;
- (void).cxx_destruct;
- (void)setUUIDString:;
- (void)setAsset:;
- (id)asset;
@end
