@interface AWERLComponentFilter : NSObject
@property (nonatomic) @? filterBlock;
@property (nonatomic) NSMutableArray components;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)walk:;
- (void)beforeAllVisit:;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (id)components;
- (id)filterBlock;
- (void)setFilterBlock:;
- (unsigned long long)visit:;
@end
