@interface AWEDanmakuResourceDownloadModel : NSObject
@property (nonatomic) NSString targetDirectoryName;
@property (nonatomic) NSString resourceID;
@property (nonatomic) NSString url;
@property (nonatomic) NSString serverMd5;
@property (nonatomic) NSString localFullPath;
@property (nonatomic) q operationType;
- (id)serverMd5;
- (void)setServerMd5:;
- (id)initWithURL:resourceID:serverMd5:;
- (BOOL)checkMd5WithFileMd5:;
- (id)targetDirectoryName;
- (void)setTargetDirectoryName:;
- (id)localFullPath;
- (void)setLocalFullPath:;
- (void)setOperationType:;
- (id)resourceID;
- (long long)operationType;
- (void)setUrl:;
- (void)setResourceID:;
- (void).cxx_destruct;
- (id)url;
@end
