@interface MPSGraphPlaceholderOp : MPSGraphOperation
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
- (id)shape;
- (unsigned int)dataType;
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:shape:dataType:name:;
- (id)initWithGraph:shape:dataType:value:name:;
@end
