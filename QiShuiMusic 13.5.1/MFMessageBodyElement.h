@interface MFMessageBodyElement : NSObject
@property (nonatomic) MFMessageBodyParser parser;
@property (nonatomic) NSArray nodes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setNodes:;
- (id)nodes;
- (void).cxx_destruct;
- (id)parser;
- (void)reset;
- (id)description;
- (void)setParser:;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:;
- (void)releaseExternally;
- (unsigned long long)quoteLevel;
- (int)valueForAttributes:;
- (id)retainExternally;
- (BOOL)isExternallyRetained;
- (unsigned long long)getQuoteLevel;
- (BOOL)_hasValueForAttributes:;
- (void)_setValue:forAttributes:;
@end
