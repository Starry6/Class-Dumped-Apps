@interface MSSearchProxy : NSObject
@property (nonatomic) MSSearch search;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)foundResults:error:;
- (id)search;
- (void).cxx_destruct;
- (void)setSearch:;
- (id)initWithSearch:;
@end
