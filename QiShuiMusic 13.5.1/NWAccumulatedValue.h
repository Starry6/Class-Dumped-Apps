@interface NWAccumulatedValue : NSObject
@property (nonatomic) NSObject object;
@property (nonatomic) NSString keyPath;
@property (nonatomic) NWAccumulation accumulation;
@property (nonatomic) @? callback;
- (id)callback;
- (void)setObject:;
- (void)setCallback:;
- (void)setAccumulation:;
- (void)setKeyPath:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)snapshot;
- (id)object;
- (id)description;
- (id)accumulation;
@end
