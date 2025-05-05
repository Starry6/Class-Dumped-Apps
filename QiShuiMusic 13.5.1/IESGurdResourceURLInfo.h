@interface IESGurdResourceURLInfo : NSObject
@property (nonatomic) Q ID;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString decompressMD5;
@property (nonatomic) Q packageSize;
- (void)setPackageSize:;
- (id)urlList;
- (id)decompressMD5;
- (unsigned long long)packageSize;
- (BOOL)parseUrlList:;
- (void)setDecompressMD5:;
- (void)setUrlList:;
- (void)setID:;
- (unsigned long long)ID;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
+ (id)instanceWithDict:;
@end
