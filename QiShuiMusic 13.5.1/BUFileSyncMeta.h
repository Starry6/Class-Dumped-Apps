@interface BUFileSyncMeta : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString name;
@property (nonatomic) q version;
@property (nonatomic) NSString etag;
- (id)url;
- (BOOL)valid;
- (void)setName:;
- (id)etag;
- (void)setVersion:;
- (long long)version;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setEtag:;
- (id)name;
- (id)md5;
- (void)setMd5:;
+ (id)fromDictionary:;
@end
