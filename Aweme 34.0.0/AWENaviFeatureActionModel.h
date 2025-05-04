@interface AWENaviFeatureActionModel : NSObject
@property (nonatomic) TTKNaviCategoryModel category;
@property (nonatomic) <AWENaviFeatureDataProtocol> data;
@property (nonatomic) Q action;
- (id)category;
- (void)setAction:;
- (unsigned long long)action;
- (void)setCategory:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)actionModelWithCategory:data:;
@end
