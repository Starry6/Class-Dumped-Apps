@interface BDXLynxDigitKeyListener : BDXLynxNumberKeyListener
@property (nonatomic) NSArray CHARACTERS;
@property (nonatomic) NSString mDecimalPointChars;
@property (nonatomic) NSString mSignChars;
- (id)CHARACTERS;
- (id)filter:start:end:dest:dstart:dend:;
- (id)getAcceptedChars;
- (id)initWithParamsNeedsDecimal:sign:;
- (id)mDecimalPointChars;
- (id)mSignChars;
- (void)setMDecimalPointChars:;
- (void)setMSignChars:;
- (id)init;
- (void).cxx_destruct;
- (long long)getInputType;
@end
