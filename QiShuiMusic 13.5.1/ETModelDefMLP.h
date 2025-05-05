@interface ETModelDefMLP : ETModelDef
@property (nonatomic) NSInteger input_size;
@property (nonatomic) NSInteger hidden_size;
@property (nonatomic) NSInteger output_size;
- (void)buildNetwork;
- (int)input_size;
- (void)setInput_size:;
- (int)hidden_size;
- (void)setHidden_size:;
- (int)output_size;
- (void)setOutput_size:;
@end
