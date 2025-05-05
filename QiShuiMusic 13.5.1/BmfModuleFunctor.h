@interface BmfModuleFunctor : NSObject
@property (nonatomic) ^v p;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (void)setOwn:;
- (id)init:type:path:entry:option:ninputs:noutputs:;
- (id)initFromPtr:own:;
- (void)dealloc;
- (id)ptr;
- (id)p;
- (void)setP:;
@end
