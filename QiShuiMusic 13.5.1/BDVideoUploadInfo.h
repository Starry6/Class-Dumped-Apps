@interface BDVideoUploadInfo : NSObject
@property (nonatomic) NSString vid;
@property (nonatomic) NSString oid;
@property (nonatomic) NSString md5;
@property (nonatomic) NSDictionary videoMetaInfo;
@property (nonatomic) NSDictionary encryptionInfo;
@property (nonatomic) NSString coverURI;
@property (nonatomic) NSString callbackArgs;
@property (nonatomic) NSDictionary userInfo;
- (void)setVid:;
- (id)vid;
- (id)callbackArgs;
- (id)coverURI;
- (void)setCallbackArgs:;
- (void)setCoverURI:;
- (void)setVideoMetaInfo:;
- (id)videoMetaInfo;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
- (id)oid;
- (void)setOid:;
- (id)encryptionInfo;
- (void)setEncryptionInfo:;
@end
