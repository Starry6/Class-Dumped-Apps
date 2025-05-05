@interface TTUploadImageXInfo : NSObject
@property (nonatomic) NSString storeUri;
@property (nonatomic) q fileIndex;
@property (nonatomic) q errCode;
@property (nonatomic) NSDictionary mediaInfoDict;
@property (nonatomic) NSDictionary encryptionMedia;
- (id)encryptionMedia;
- (long long)errCode;
- (id)mediaInfoDict;
- (void)setEncryptionMedia:;
- (void)setErrCode:;
- (void)setMediaInfoDict:;
- (void)setStoreUri:;
- (id)storeUri;
- (void).cxx_destruct;
- (long long)fileIndex;
- (void)setFileIndex:;
@end
