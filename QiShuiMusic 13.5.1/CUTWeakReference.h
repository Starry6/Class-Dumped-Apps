@interface CUTWeakReference : NSObject
@property (nonatomic) @ object;
@property (nonatomic) Q objectAddress;
- (void)setObject:;
- (unsigned long long)objectAddress;
- (unsigned long long)hash;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)object;
- (void)setObjectAddress:;
- (BOOL)isEqual:;
+ (id)weakRefWithObject:;
@end
