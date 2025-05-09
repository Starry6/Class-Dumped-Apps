@interface IESGurdDownloadInfoModel : NSObject
@property (nonatomic) NSString identity;
@property (nonatomic) NSString currentDownloadURLString;
@property (nonatomic) NSArray allDownloadURLStrings;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString packageSort;
@property (nonatomic) q packageType;
@property (nonatomic) Q packageVersion;
@property (nonatomic) Q packageSize;
- (void)setPackageSize:;
- (void)setPackageSort:;
- (void)setPackageType:;
- (id)allDownloadURLStrings;
- (id)currentDownloadURLString;
- (unsigned long long)packageSize;
- (id)packageSort;
- (unsigned long long)packageVersion;
- (void)setAllDownloadURLStrings:;
- (void)setCurrentDownloadURLString:;
- (void)setPackageVersion:;
- (void)setIdentity:;
- (void)setChannel:;
- (id)identity;
- (id)channel;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
- (long long)packageType;
@end
