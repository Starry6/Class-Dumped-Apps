@interface MPSGraphTensor : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) {Value=^{ValueImpl}} value;
@property (nonatomic) Q index;
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
@property (nonatomic) MPSGraphOperation operation;
- (id)operation;
- (id)shape;
- (unsigned int)dataType;
- (id)debugDescription;
- (unsigned long long)index;
- (void).cxx_destruct;
- (id)value;
- (id)name;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)initTensorWithValue:graph:;
- (id)initTensorWithOperation:value:graph:;
- (id)initTensorWithOperation:value:graph:name:;
- (id)initTensorWithOperation:value:graph:parentBlock:name:;
@end
