@interface AWEVideoCacheMetaData : NSObject
@property (nonatomic) Q fileLength;
@property (nonatomic) NSString mimeType;
@property (nonatomic) BOOL disableAutoTrim;
- (BOOL)disableAutoTrim;
- (void)setDisableAutoTrim:;
- (id)init;
- (void)encodeWithCoder:;
- (id)description;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setMimeType:;
- (id)initWithCoder:;
- (unsigned long long)fileLength;
- (void)setFileLength:;
@end
