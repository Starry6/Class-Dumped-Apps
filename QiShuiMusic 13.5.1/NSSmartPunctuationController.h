@interface NSSmartPunctuationController : NSObject
@property (nonatomic) <NSSmartPunctuationClient> client;
@property (nonatomic) NSSmartQuoteOptions smartQuoteOptions;
@property (nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) BOOL smartDashesEnabled;
- (void)setSmartDashesEnabled:;
- (id)init;
- (void)dealloc;
- (BOOL)smartDashesEnabled;
- (void)setClient:;
- (void)setSmartQuotesEnabled:;
- (BOOL)smartQuotesEnabled;
- (id)client;
- (id)smartQuoteOptions;
- (void)setSmartQuoteOptions:;
- (void)clientDidReplaceRange:changeInLength:;
@end
