@interface AWEIMWatchOnceImageResourceInfo : MTLModel
@property (nonatomic) NSString skey;
@property (nonatomic) NSString oid;
@property (nonatomic) NSString md5;
@property (nonatomic) NSNumber dataSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skey;
- (void)setSkey:;
- (void)setDataSize:;
- (id)dataSize;
- (void).cxx_destruct;
- (void)setMd5:;
- (id)md5;
- (id)oid;
- (void)setOid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
