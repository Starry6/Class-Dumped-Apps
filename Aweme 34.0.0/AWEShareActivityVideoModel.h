@interface AWEShareActivityVideoModel : AWEBaseApiModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSString coverURL;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (void)setHeight:;
- (void)setWidth:;
- (id)uri;
- (int)width;
- (void)setUri:;
- (void).cxx_destruct;
- (int)height;
- (id)urlList;
- (void)setUrlList:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
