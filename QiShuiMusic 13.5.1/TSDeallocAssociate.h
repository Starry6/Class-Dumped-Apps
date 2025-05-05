@interface TSDeallocAssociate : NSObject
@property (nonatomic) @? deallocBlock;
- (id)deallocBlock;
- (void)setDeallocBlock:;
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
@end
