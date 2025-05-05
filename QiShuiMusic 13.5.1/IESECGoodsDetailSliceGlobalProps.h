@interface IESECGoodsDetailSliceGlobalProps : NSObject
@property (nonatomic) NSMutableDictionary globalProps;
- (void)appendGlobalDataFromDictionary:;
- (void)setGlobalProps:;
- (id)globalProps;
- (id)mergeGlobalData:;
- (void)setupGlobalProps:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)updateWithAction:;
@end
