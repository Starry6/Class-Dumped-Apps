@interface TTRequestFilterObject : NSObject
@property (nonatomic) NSString requestFilterName;
@property (nonatomic) @? requestFilterBlock;
- (id)initWithName:requestFilterBlock:;
- (id)requestFilterBlock;
- (id)requestFilterName;
- (void)setRequestFilterBlock:;
- (void)setRequestFilterName:;
- (void)dealloc;
- (void).cxx_destruct;
@end
