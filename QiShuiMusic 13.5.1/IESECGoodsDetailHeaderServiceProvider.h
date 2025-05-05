@interface IESECGoodsDetailHeaderServiceProvider : NSObject
@property (nonatomic) NSMutableDictionary serviceMap;
@property (nonatomic) NSMapTable weakTable;
@property (nonatomic) NSMutableArray components;
- (id)implForProtocol:;
- (void)registerComponent:;
- (void)registerService:forProtocol:weak:;
- (id)serviceMap;
- (void)setServiceMap:;
- (void)setWeakTable:;
- (id)weakTable;
- (id)components;
- (id)init;
- (void)setComponents:;
- (void).cxx_destruct;
@end
