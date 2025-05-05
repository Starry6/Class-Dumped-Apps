@interface TTResponseFilterObject : NSObject
@property (nonatomic) NSString responseFilterName;
@property (nonatomic) @? responseFilterBlock;
- (id)initWithName:responseFilterBlock:;
- (id)responseFilterBlock;
- (id)responseFilterName;
- (void)setResponseFilterBlock:;
- (void)setResponseFilterName:;
- (void).cxx_destruct;
@end
