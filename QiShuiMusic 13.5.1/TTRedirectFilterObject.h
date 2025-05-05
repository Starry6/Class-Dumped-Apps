@interface TTRedirectFilterObject : NSObject
@property (nonatomic) NSString redirectFilterName;
@property (nonatomic) @? redirectFilterBlock;
- (id)initWithName:redirectFilterBlock:;
- (id)redirectFilterBlock;
- (id)redirectFilterName;
- (void)setRedirectFilterBlock:;
- (void)setRedirectFilterName:;
- (void).cxx_destruct;
@end
