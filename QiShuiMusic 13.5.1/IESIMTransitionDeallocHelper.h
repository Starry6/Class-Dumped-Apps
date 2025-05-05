@interface IESIMTransitionDeallocHelper : NSObject
@property (nonatomic) @? deallocBlock;
- (id)deallocBlock;
- (void)setDeallocBlock:;
- (void)dealloc;
- (void).cxx_destruct;
@end
