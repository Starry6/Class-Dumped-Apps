@interface AWEMusicURLModel : AWEBaseApiModel
@property (nonatomic) NSNumber dataSize;
@property (nonatomic) NSString fileHash;
@property (nonatomic) NSString URI;
@property (nonatomic) NSArray urlList;
- (void)setDataSize:;
- (void)setURI:;
- (id)URI;
- (id)dataSize;
- (void).cxx_destruct;
- (id)fileHash;
- (void)setFileHash:;
- (id)urlList;
- (void)setUrlList:;
+ (id)JSONKeyPathsByPropertyKey;
@end
