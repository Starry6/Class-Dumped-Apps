@interface MPSGraphShapedType : MPSGraphType
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
- (void)setShape:;
- (void)setDataType:;
- (id)shape;
- (unsigned int)dataType;
- (BOOL)isEqualTo:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithShape:dataType:;
@end
