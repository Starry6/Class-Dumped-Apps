@interface AWERLStringBuilder : NSObject
@property (nonatomic) NSMutableArray lines;
@property (nonatomic) NSString prefixString;
@property (nonatomic) NSString indentation;
@property (nonatomic) q depth;
- (void)buildWithIncreaseIndent:;
- (void)decreaseDepth;
- (long long)depth;
- (id)init;
- (void)setIndentation:;
- (id)indentation;
- (void).cxx_destruct;
- (id)lines;
- (void)setDepth:;
- (void)setLines:;
- (id)prefixString;
- (id)buildString;
- (void)appendLine:;
- (void)setPrefixString:;
- (void)increaseDepth;
@end
