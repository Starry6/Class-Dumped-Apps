@interface BDLRUContainer : NSObject
@property (nonatomic) <NSCoding> target;
@property (nonatomic) Q count;
- (void)setCount:;
- (id)initWithTarget:;
- (id)initWithCoder:;
- (void)setTarget:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)target;
- (unsigned long long)count;
@end
