@interface BU_IESGurdResourceURLInfo : NSObject
@property (nonatomic) q ID;
@property (nonatomic) NSString url;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString md5;
- (id)urlList;
- (void)setUrlList:;
- (void)setID:;
- (long long)ID;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
+ (id)instanceWithDict:;
@end
