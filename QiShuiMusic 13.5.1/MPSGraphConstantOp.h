@interface MPSGraphConstantOp : MPSGraphOperation
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
- (id)shape;
- (unsigned int)dataType;
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:data:shape:dataType:isSplat:name:;
@end
