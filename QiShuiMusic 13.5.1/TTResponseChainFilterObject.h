@interface TTResponseChainFilterObject : NSObject
@property (nonatomic) NSString responseChainFilterName;
@property (nonatomic) @? responseChainFilterBlock;
- (id)initWithName:responseChainFilterBlock:;
- (id)responseChainFilterBlock;
- (id)responseChainFilterName;
- (void)setResponseChainFilterBlock:;
- (void)setResponseChainFilterName:;
- (void).cxx_destruct;
@end
