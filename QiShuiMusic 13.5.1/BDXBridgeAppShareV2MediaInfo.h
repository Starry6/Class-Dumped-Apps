@interface BDXBridgeAppShareV2MediaInfo : BDXBridgeModel
@property (nonatomic) NSString data_url;
@property (nonatomic) NSString share_douyin_title;
@property (nonatomic) NSString douyin_share_id;
@property (nonatomic) NSArray douyin_publish_hash_tags;
- (id)douyin_share_id;
- (id)data_url;
- (id)douyin_publish_hash_tags;
- (void)setData_url:;
- (void)setDouyin_publish_hash_tags:;
- (void)setDouyin_share_id:;
- (void)setShare_douyin_title:;
- (id)share_douyin_title;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
