@interface BDREBaseNode : NSObject
@property (nonatomic) NSString aOriginValue;
@property (nonatomic) Q wordIndex;
@property (nonatomic) Q priority;
- (id)aOriginValue;
- (id)initAsBaseNode:index:;
- (void)setAOriginValue:;
- (void)setWordIndex:;
- (unsigned long long)wordIndex;
- (void)setPriority:;
- (void).cxx_destruct;
- (unsigned long long)priority;
@end
