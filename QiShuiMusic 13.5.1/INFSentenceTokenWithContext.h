@interface INFSentenceTokenWithContext : NSObject
@property (nonatomic) BOOL resolved;
@property (nonatomic) NSString placeholderName;
@property (nonatomic) INFSentenceContext context;
@property (nonatomic) INFSentenceToken originalToken;
- (id)context;
- (BOOL)isResolved;
- (void)setResolved:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)originalToken;
- (void)setOriginalToken:;
- (id)placeholderName;
- (void)setPlaceholderName:;
- (id)initWithToken:variableName:;
+ (id)sentenceResolvedTokenWithOriginalToken:placeholderName:;
@end
