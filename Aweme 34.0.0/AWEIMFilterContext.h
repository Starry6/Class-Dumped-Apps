@interface AWEIMFilterContext : NSObject
@property (nonatomic) NSMutableArray selectedSourceArray;
@property (nonatomic) NSMutableArray selectedStatusArray;
- (void)setSelectedSourceArray:;
- (void)setSelectedStatusArray:;
- (id)selectedSourceArray;
- (id)selectedStatusArray;
- (id)init;
- (void).cxx_destruct;
@end
