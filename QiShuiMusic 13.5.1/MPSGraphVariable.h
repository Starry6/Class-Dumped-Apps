@interface MPSGraphVariable : NSObject
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
@property (nonatomic) {Value=^{ValueImpl}} value;
- (id)shape;
- (unsigned int)dataType;
- (void).cxx_destruct;
- (id)value;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)mpsNDArrayWithDevice:;
- (id)initVariableWithData:dataType:shape:;
- (id)initVariableWithData:value:;
- (id)initVariableWithMPSNDArray:value:;
+ (id)newVariableWithData:dataType:shape:;
@end
