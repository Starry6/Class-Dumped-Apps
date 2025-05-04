@interface AWEDanmakuActivityResourcesModel : NSObject
@property (nonatomic) NSString resourceID;
@property (nonatomic) NSString url;
@property (nonatomic) NSString urlMd5;
@property (nonatomic) NSString serverMd5;
- (id)initWithUrl:resourceID:urlMd5:serverMd5:;
- (id)urlMd5;
- (void)setUrlMd5:;
- (id)serverMd5;
- (void)setServerMd5:;
- (id)resourceID;
- (void)setUrl:;
- (void)setResourceID:;
- (void).cxx_destruct;
- (id)url;
@end
