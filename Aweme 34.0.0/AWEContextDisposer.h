@interface AWEContextDisposer : NSObject
@property (nonatomic) AWEThreadSafeMutableDictionary dictionary;
@property (nonatomic) AWEContextCenter contextCenter;
- (void)addKey:handler:;
- (id)contextItemForKey:;
- (void)removeHandlersForKey:;
- (void)removeHandlers;
- (id)contextCenter;
- (void)setContextCenter:;
- (void)removeHandlersForKey:item:;
- (void)dispose;
- (id)init;
- (void)dealloc;
- (id)dictionary;
- (void)setDictionary:;
- (void).cxx_destruct;
@end
