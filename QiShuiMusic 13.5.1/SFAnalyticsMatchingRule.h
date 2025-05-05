@interface SFAnalyticsMatchingRule : NSObject
@property (nonatomic) SECSFARule rule;
@property (nonatomic) NSDate lastMatch;
@property (nonatomic) NSDictionary matchingDictionary;
@property (nonatomic) NSString eventName;
- (id)rule;
- (void)setMatchingDictionary:;
- (id)matchingDictionary;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (void)setRule:;
- (id)initWithSFARule:logger:;
- (BOOL)valueMatch:target:;
- (BOOL)isSubsetMatch:target:;
- (id)lastMatchTimeKey;
- (BOOL)matchAttributes:logger:;
- (BOOL)shouldRatelimit:;
- (unsigned int)doAction:logger:;
- (id)lastMatch;
- (void)setLastMatch:;
@end
