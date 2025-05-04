@interface AWEGoodsShowOnceManager : NSObject
@property (nonatomic) NSMutableSet goods;
- (id)goods;
- (void)setGoods:;
- (void)clearWithIdentifier:;
- (id)init;
- (void)clear;
- (BOOL)contains:;
- (void).cxx_destruct;
- (void)visit:;
@end
