@interface SignpostSupportObjectFilter : NSObject
@property (nonatomic) @? filterBlock;
- (id)filterBlock;
- (void).cxx_destruct;
- (id)initWithFilterBlock:;
- (BOOL)passesObject:;
@end
