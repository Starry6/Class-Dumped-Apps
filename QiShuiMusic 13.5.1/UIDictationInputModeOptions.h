@interface UIDictationInputModeOptions : NSObject
@property (nonatomic) NSString invocationSource;
@property (nonatomic) BOOL shouldStayInDictationInputModeIfAutoEndpointed;
@property (nonatomic) BOOL shouldSupressShowingAlternativesAutomatically;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)invocationSource;
- (void)setInvocationSource:;
- (BOOL)shouldStayInDictationInputModeIfAutoEndpointed;
- (void)setShouldStayInDictationInputModeIfAutoEndpointed:;
- (BOOL)shouldSupressShowingAlternativesAutomatically;
- (void)setShouldSupressShowingAlternativesAutomatically:;
+ (BOOL)supportsSecureCoding;
+ (id)dictationInputModeOptionsWithInvocationSource:;
@end
