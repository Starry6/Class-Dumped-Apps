@interface CHResultWithContext : NSObject
@property (nonatomic) NSString leftContext;
@property (nonatomic) NSInteger contentType;
@property (nonatomic) CHMutableTokenizedTextResult result;
- (void)setContentType:;
- (id)result;
- (int)contentType;
- (void).cxx_destruct;
- (void)setResult:;
- (void)setLeftContext:;
- (id)leftContext;
- (id)initWithResult:leftContext:contentType:;
@end
