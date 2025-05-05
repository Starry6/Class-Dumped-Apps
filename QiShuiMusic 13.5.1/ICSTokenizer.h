@interface ICSTokenizer : NSObject
@property (nonatomic) BOOL printedICS;
@property (nonatomic) NSInteger logCount;
- (id)currentToken;
- (void)setLogCount:;
- (id)initWithData:;
- (void).cxx_destruct;
- (int)logCount;
- (int)tokenType;
- (id)nextToken;
- (id)initWithCompressedData:;
- (BOOL)consumeChar:;
- (BOOL)consumeEOL;
- (void)consumeWhiteSpace;
- (void)consumePropName;
- (void)consumeParamName;
- (BOOL)consumeEscaped:;
- (void)consumeParamValue;
- (void)consumePropValue;
- (BOOL)printedICS;
- (void)setPrintedICS:;
@end
