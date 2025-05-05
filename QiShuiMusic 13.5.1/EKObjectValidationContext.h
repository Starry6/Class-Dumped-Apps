@interface EKObjectValidationContext : NSObject
@property (nonatomic) EKObject rootObject;
@property (nonatomic) Q depth;
@property (nonatomic) BOOL reachedMaxDepth;
- (unsigned long long)depth;
- (void)setDepth:;
- (id)rootObject;
- (void).cxx_destruct;
- (id)initWithRootObject:;
- (void)faultIfNeededForObject:;
- (BOOL)reachedMaxDepth;
- (void)setReachedMaxDepth:;
@end
