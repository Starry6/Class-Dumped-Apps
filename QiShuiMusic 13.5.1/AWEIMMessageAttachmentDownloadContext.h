@interface AWEIMMessageAttachmentDownloadContext : NSObject
@property (nonatomic) NSInteger fileType;
@property (nonatomic) NSString fileID;
@property (nonatomic) NSString secretKey;
@property (nonatomic) BOOL needFetchUrl;
@property (nonatomic) NSString urlPath;
@property (nonatomic) NSString tosKey;
- (BOOL)needFetchUrl;
- (void)setNeedFetchUrl:;
- (void)setTosKey:;
- (void)setUrlPath:;
- (id)tosKey;
- (void)setFileID:;
- (id)fileID;
- (void)setSecretKey:;
- (void)setFileType:;
- (int)fileType;
- (void).cxx_destruct;
- (id)secretKey;
- (id)urlPath;
@end
