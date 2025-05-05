@interface CNHeapObject : NSObject
@property (nonatomic) NSString className;
@property (nonatomic) NSString binary;
@property (nonatomic) Q count;
@property (nonatomic) Q bytes;
- (void)setCount:;
- (id)className;
- (void)setClassName:;
- (unsigned long long)bytes;
- (void).cxx_destruct;
- (id)binary;
- (id)description;
- (unsigned long long)count;
- (void)setBytes:;
- (id)classAndBinaryKey;
- (void)setBinary:;
@end
