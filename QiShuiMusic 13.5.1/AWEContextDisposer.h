@interface AWEContextDisposer : NSObject
@property (nonatomic) AWEThreadSafeMutableDictionary dictionary;
@property (nonatomic) AWEContextCenter contextCenter;
- (void)addKey:handler:;
- (id)contextCenter;
- (id)contextItemForKey:;
- (void)removeHandlers;
- (void)removeHandlersForKey:;
- (void)removeHandlersForKey:item:;
- (void)setContextCenter:;
- (id)dictionary;
- (id)init;
- (void)dealloc;
- (void)setDictionary:;
- (void)dispose;
- (void).cxx_destruct;
@end
