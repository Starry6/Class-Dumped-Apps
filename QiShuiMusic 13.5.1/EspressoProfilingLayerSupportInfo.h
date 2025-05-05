@interface EspressoProfilingLayerSupportInfo : NSObject
@property (nonatomic) NSArray error_public;
@property (nonatomic) NSArray error_private;
@property (nonatomic) BOOL supported;
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL has_perf_warning;
@property (nonatomic) BOOL internal_layer;
@property (nonatomic) NSString type;
- (BOOL)supported;
- (BOOL)exists;
- (void)setExists:;
- (void)setType:;
- (void)setSupported:;
- (id)type;
- (void).cxx_destruct;
- (id)error_public;
- (void)setError_public:;
- (id)error_private;
- (void)setError_private:;
- (BOOL)has_perf_warning;
- (void)setHas_perf_warning:;
- (BOOL)internal_layer;
- (void)setInternal_layer:;
@end
