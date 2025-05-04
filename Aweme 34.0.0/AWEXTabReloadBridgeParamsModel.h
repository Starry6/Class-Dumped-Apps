@interface AWEXTabReloadBridgeParamsModel : BDXBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL isPrerender;
@property (nonatomic) NSNumber availableMemoryThreshold;
@property (nonatomic) BOOL onIdle;
- (void)setIsPrerender:;
- (id)availableMemoryThreshold;
- (void)setAvailableMemoryThreshold:;
- (BOOL)isPrerender;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (BOOL)onIdle;
- (void)setOnIdle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
