@interface GEOServerFormatStyleParser : NSObject
@property (nonatomic) NSArray styles;
@property (nonatomic) NSArray tokenRanges;
- (id)styles;
- (id)init;
- (id)initWithString:;
- (void).cxx_destruct;
- (void)_parse;
- (id)rangeForStyleAtIndex:;
- (void)enumerateStylesWithBlock:;
- (id)tokenRanges;
- (void)enumerateTokenRangesForRemoval:;
- (id)attributedStringWithStyleAttributes:defaultAttributes:;
- (void)_parseIfNeeded;
- (BOOL)_handleOpeningResult:;
- (BOOL)_handleClosingResult:;
- (void)_removeTokensFromAttributedString:;
@end
