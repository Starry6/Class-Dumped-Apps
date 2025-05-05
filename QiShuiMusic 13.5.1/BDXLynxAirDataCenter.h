@interface BDXLynxAirDataCenter : NSObject
@property (nonatomic) BDXLynxKitParams params;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) NSDictionary initialData;
@property (nonatomic) BDXLynxAirActionMetaBundle meta;
@property (nonatomic) BDXThreadSafeDictionary elementActions;
- (void)setGlobalProps:;
- (void)setInitialData:;
- (id)elementActions;
- (id)globalProps;
- (id)initialData;
- (void)setElementActions:;
- (void)updateDataWithDictionary:;
- (id)meta;
- (id)init;
- (void)setMeta:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
