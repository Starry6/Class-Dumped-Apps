@interface SKCustomFieldNode : SKFieldNode
@property (nonatomic) @? block;
- (id)block;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)_initialize;
- (void)setBlock:;
- (id)_descriptionClassName;
- (void)setBatchBlock:;
- (id)batchBlock;
+ (BOOL)supportsSecureCoding;
@end
