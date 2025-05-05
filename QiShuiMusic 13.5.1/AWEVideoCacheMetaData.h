@interface AWEVideoCacheMetaData : NSObject
@property (nonatomic) Q fileLength;
@property (nonatomic) NSString mimeType;
@property (nonatomic) BOOL disableAutoTrim;
- (BOOL)disableAutoTrim;
- (void)setDisableAutoTrim:;
- (id)init;
- (id)initWithCoder:;
- (id)mimeType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setMimeType:;
- (unsigned long long)fileLength;
- (void)setFileLength:;
@end
