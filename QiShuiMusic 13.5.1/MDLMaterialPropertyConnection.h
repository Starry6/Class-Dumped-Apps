@interface MDLMaterialPropertyConnection : NSObject
@property (nonatomic) MDLMaterialProperty output;
@property (nonatomic) MDLMaterialProperty input;
@property (nonatomic) NSString name;
- (id)output;
- (id)input;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithOutput:input:;
@end
