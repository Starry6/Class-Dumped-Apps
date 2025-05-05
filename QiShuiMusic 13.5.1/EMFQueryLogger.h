@interface EMFQueryLogger : NSObject
@property (nonatomic) r^{__EmojiLocaleDataWrapper=} localeData;
- (void)dealloc;
- (id)localeData;
- (id)initWithEmojiLocaleData:;
- (void)logQueryResult:;
+ (id)documentWeightsStringFromQueryResult:usingLocaleData:;
+ (id)overriddenResultsStringFromQueryResult:usingLocaleData:;
@end
