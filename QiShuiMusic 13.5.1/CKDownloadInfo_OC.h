@interface CKDownloadInfo_OC : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString md5;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSDictionary extraMap;
@property (nonatomic) Q fileSize;
@property (nonatomic) double duration;
@property (nonatomic) double startDownloadTime;
- (id)cppValue;
- (id)extraMap;
- (id)initWithCPPValue:;
- (void)setExtraMap:;
- (void)setStartDownloadTime:;
- (double)startDownloadTime;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)init;
- (id)urls;
- (void)setFilePath:;
- (void)setUrls:;
- (void)setDuration:;
- (void)setFileSize:;
- (void).cxx_destruct;
- (double)duration;
- (id).cxx_construct;
- (id)md5;
- (void)setMd5:;
- (id)toString;
@end
