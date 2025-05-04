@interface AWESearchECardTracker : NSObject
@property (nonatomic) @? builderBlock;
@property (nonatomic) @? searchParamsBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)builderBlock;
- (void)setBuilderBlock:;
- (id)searchParamsBlock;
- (void)eventWithModel:event:params:;
- (id)makeSearchParams;
- (void)setSearchParamsBlock:;
- (void).cxx_destruct;
- (void)event:params:;
@end
