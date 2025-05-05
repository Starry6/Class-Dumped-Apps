@interface IESECShopProductsObjectPool : NSObject
@property (nonatomic) Q maxSize;
- (id)initWithMaxSize:generator:;
- (unsigned long long)maxSize;
- (void)setMaxSize:;
- (id)acquire;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGenerator:;
- (void)release:;
@end
