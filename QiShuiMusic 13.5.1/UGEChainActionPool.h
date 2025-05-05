@interface UGEChainActionPool : NSObject
@property (nonatomic) NSMutableSet chainList;
- (id)chainList;
- (void)setChainList:;
- (void).cxx_destruct;
+ (void)addChainAction:;
+ (id)defaultPool;
+ (void)removeChainAction:;
@end
