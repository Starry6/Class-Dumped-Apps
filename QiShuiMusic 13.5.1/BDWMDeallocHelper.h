@interface BDWMDeallocHelper : NSObject
@property (nonatomic) @? deallocBlock;
@property (nonatomic) @ target;
- (id)deallocBlock;
- (void)setDeallocBlock:;
- (void)dealloc;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
+ (void)attachDeallocBlock:toTarget:forKey:;
+ (void)dettachDeallocBlockInTarget:forKey:;
@end
