@interface MPSGraphSparseTensorOp : MPSGraphOperation
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
@property (nonatomic) Q sparseStorageType;
- (id)shape;
- (unsigned int)dataType;
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (unsigned long long)sparseStorageType;
- (id)initWithGraph:sparseStorageType:inputTensors:shape:dataType:name:;
@end
