@interface BSBlockTransaction : BSTransaction
@property (nonatomic) NSString debugName;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (id)_descriptionProem;
- (id)initWithBlock:;
- (id)debugName;
- (void)setDebugName:;
- (void).cxx_destruct;
- (id)_graphNodeDebugName;
@end
