@interface IESECShopProductsImageLoadConfiguration : NSObject
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString bizTag;
@property (nonatomic) NSString sceneTag;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) UIImage placeholder;
@property (nonatomic) q contentMode;
- (id)bizTag;
- (id)sceneTag;
- (void)setBizTag:;
- (void)setSceneTag:;
- (id)init;
- (id)urls;
- (long long)contentMode;
- (id)placeholder;
- (void)setPlaceholder:;
- (void)setUrls:;
- (void).cxx_destruct;
- (void)setContentMode:;
- (void)setSize:;
- (id)size;
@end
