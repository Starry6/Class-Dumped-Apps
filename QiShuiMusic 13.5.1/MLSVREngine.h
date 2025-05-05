@interface MLSVREngine : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) ^{svm_model={svm_parameter=iiidddddi^i^dddii}ii^^{svm_node}^^d^d^d^d^i^i^ii} model;
@property (nonatomic) BOOL freeModelOnDealloc;
@property (nonatomic) BOOL isInputSizeLowerBoundOnly;
@property (nonatomic) Q inputSize;
- (id)model;
- (void)dealloc;
- (void)setModel:;
- (id)predict:;
- (unsigned long long)inputSize;
- (id)initWithLibSVMFile:;
- (id)initWithSVMModel:freeOnDealloc:isInputSizeLowerBoundOnly:inputSize:;
- (id)allocSVMNodeVector:;
- (void)fillSVMNodeVector:values:count:;
- (void)deallocSVMNodeVector:;
- (BOOL)isInputSizeLowerBoundOnly;
- (BOOL)freeModelOnDealloc;
- (void)setFreeModelOnDealloc:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
