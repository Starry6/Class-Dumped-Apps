@interface PHSuggestionMessageMatchingResult : NSObject
@property (nonatomic) PHSuggestion suggestion;
@property (nonatomic) PHSuggestionMessageContext messageContext;
@property (nonatomic) NSMutableDictionary scoreByCMMSuggestionMatchingType;
- (id)suggestion;
- (void)setSuggestion:;
- (void).cxx_destruct;
- (id)messageContext;
- (void)setMessageContext:;
- (id)initWithSuggestion:messageContext:;
- (void)registerMatchingType:weight:;
- (double)scoreForSuggestionMatchingType:;
- (id)scoreByCMMSuggestionMatchingType;
- (void)setScoreByCMMSuggestionMatchingType:;
@end
