@interface AWEIMCheckQuoteHasLocalResultModel : NSObject
@property (nonatomic) BOOL hasLocal;
@property (nonatomic) NSString realRelativeFilePath;
@property (nonatomic) NSString realAbsoluteFilePath;
- (id)realRelativeFilePath;
- (void)setRealRelativeFilePath:;
- (id)realAbsoluteFilePath;
- (void)setRealAbsoluteFilePath:;
- (void).cxx_destruct;
- (BOOL)hasLocal;
- (void)setHasLocal:;
@end
