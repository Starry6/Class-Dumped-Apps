@interface AWEYapImageStyleUtil : NSObject
@property (nonatomic) q style;
@property (nonatomic) NSDictionary imageNameDict;
@property (nonatomic) NSDictionary sizeDict;
- (void)fetchConfig;
- (void)refreshStyle;
- (void)p_setImageData;
- (void)p_setSizeData;
- (void)setImageNameDict:;
- (void)setSizeDict:;
- (id)imageNameDict;
- (id)sizeDict;
- (id)imageInScene:;
- (double)sizeInScene:;
- (long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)shareInstance;
@end
