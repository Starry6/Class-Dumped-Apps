@interface PLFilesystemDeletionInfo : NSObject
@property (nonatomic) NSArray fileURLs;
@property (nonatomic) NSString thumbnailIdentifier;
@property (nonatomic) NSURL objectIDURI;
@property (nonatomic) Q thumbnailIndex;
@property (nonatomic) NSString uuid;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSString directory;
@property (nonatomic) NSString filename;
- (id)filename;
- (id)directory;
- (id)uuid;
- (id)thumbnailIdentifier;
- (id)fileURLs;
- (void)setThumbnailIdentifier:;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)thumbnailIndex;
- (id)initWithObjectIDURI:directory:filename:fileURLs:thumbnailIndex:thumbnailIdentifier:uuid:timestamp:;
- (id)objectIDURI;
- (void)setFileURLs:;
+ (id)deletionInfoWithAsset:;
@end
