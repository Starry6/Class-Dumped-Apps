@interface MTPrunePromise : NSObject
@property (nonatomic) BOOL promiseFulfilled;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMaterialLayer:;
- (void)fulfillPromise;
- (double)timeIntervalSincePromise;
- (BOOL)isPromiseFulfilled;
- (void)setPromiseFulfilled:;
@end
