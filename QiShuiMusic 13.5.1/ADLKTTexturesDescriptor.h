@interface ADLKTTexturesDescriptor : NSObject
@property (nonatomic) Q scales;
@property (nonatomic) ADImageDescriptor inputDescriptor;
@property (nonatomic) NSArray pyramidsDescriptors;
@property (nonatomic) NSArray featuresDescriptors;
@property (nonatomic) NSArray derivitivesDescriptors;
@property (nonatomic) ADImageDescriptor shiftmapDescriptor;
@property (nonatomic) {?=Q@Biifff} opticalFlowConfig;
- (unsigned long long)scales;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)inputSizeForLayout:;
- (id)derivitivesDescriptors;
- (id)pyramidsDescriptors;
- (id)opticalFlowConfig;
- (id)featuresDescriptors;
- (id)initForSupportedSizes:config:;
- (id)inputDescriptor;
- (id)shiftmapDescriptor;
@end
