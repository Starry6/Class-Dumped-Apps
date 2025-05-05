@interface VNEspressoResources : NSObject
@property (nonatomic) {?=^vi} network;
@property (nonatomic) ^v plan;
@property (nonatomic) ^v context;
@property (nonatomic) NSString modelName;
@property (nonatomic) NSString networkConfigurationName;
- (id)modelName;
- (id)plan;
- (id)network;
- (void)dealloc;
- (id)context;
- (id)initWithModelName:networkConfigurationName:network:plan:context:;
- (void)free;
- (id)networkConfigurationName;
- (void).cxx_destruct;
- (id)description;
@end
