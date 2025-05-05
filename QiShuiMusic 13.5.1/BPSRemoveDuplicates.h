@interface BPSRemoveDuplicates : BPSPublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @? isDuplicate;
- (id)upstream;
- (id)init;
- (id)isDuplicate;
- (void)subscribe:;
- (void).cxx_destruct;
- (id)initWithUpstream:isDuplicate:;
+ (id)new;
@end
