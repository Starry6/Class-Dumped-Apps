@interface BDXBridgePlayerChangePlaySourceMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString play_type;
@property (nonatomic) NSString et_params;
@property (nonatomic) NSString queue_loop_mode;
@property (nonatomic) BDXBridgePlayerChangePlaySourcePlaySource play_source;
@property (nonatomic) q show_type;
- (id)queue_loop_mode;
- (void)setPlay_source:;
- (id)et_params;
- (id)play_source;
- (id)play_type;
- (void)setEt_params:;
- (void)setPlay_type:;
- (void)setQueue_loop_mode:;
- (void)setShow_type:;
- (long long)show_type;
- (void).cxx_destruct;
+ (id)play_sourceJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)show_typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
