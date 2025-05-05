@interface AWEShareActivityVideoModel : IESIMBaseApiModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSString coverURL;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (id)urlList;
- (void)setUrlList:;
- (id)uri;
- (void)setWidth:;
- (int)height;
- (int)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setUri:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
