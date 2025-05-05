@interface APBSuitableDownloadManager : NSObject
@property (nonatomic) NSString URL;
@property (nonatomic) NSString path;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString sign;
@property (nonatomic) @? succeedBlock;
@property (nonatomic) @? failureBlock;
- (id)initWithURL:path:fileName:sign:;
- (void)beginDownload:failure:;
- (BOOL)checkFileExists:;
- (BOOL)checkIfModelValidWithURL:;
- (id)modelLocation;
- (void)setSign:;
- (void)setSucceedBlock:;
- (id)sign;
- (void)startLoad;
- (id)succeedBlock;
- (id)path;
- (id)fileName;
- (void)setPath:;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void).cxx_destruct;
- (void)setFileName:;
- (void)setURL:;
- (id)URL;
+ (void)download:fileName:md5:;
+ (void)downloadSuitable:;
@end
