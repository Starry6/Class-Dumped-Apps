@interface POPMutableAnimatableProperty : POPAnimatableProperty
@property (nonatomic) NSString name;
@property (nonatomic) @? readBlock;
@property (nonatomic) @? writeBlock;
@property (nonatomic) double threshold;
- (double)threshold;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (void)setThreshold:;
- (id)writeBlock;
- (id)readBlock;
- (void)setReadBlock:;
- (void)setWriteBlock:;
@end
