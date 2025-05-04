@interface AWEIMMessageAttachmentDownloadContext : NSObject
@property (nonatomic) NSInteger fileType;
@property (nonatomic) NSString fileID;
@property (nonatomic) NSString secretKey;
@property (nonatomic) BOOL needFetchUrl;
@property (nonatomic) NSString urlPath;
@property (nonatomic) NSString tosKey;
- (id)tosKey;
- (void)setUrlPath:;
- (void)setTosKey:;
- (BOOL)needFetchUrl;
- (void)setNeedFetchUrl:;
- (int)fileType;
- (void)setFileID:;
- (id)fileID;
- (void)setSecretKey:;
- (id)urlPath;
- (id)secretKey;
- (void)setFileType:;
- (void).cxx_destruct;
@end
