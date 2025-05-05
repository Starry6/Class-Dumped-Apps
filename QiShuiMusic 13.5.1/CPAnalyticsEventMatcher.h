@interface CPAnalyticsEventMatcher : NSObject
@property (nonatomic) NSString eventKeyToMatch;
@property (nonatomic) NSDictionary eventPropertiesToMatch;
@property (nonatomic) NSArray conditionalChecks;
- (id)_validateAndParseEventProperties:;
- (id)_validateAndParseConditionalChecks:;
- (id)eventKeyToMatch;
- (id)initWithConfig:;
- (BOOL)doesMatch:;
- (id)_validateAndParseEventKey:;
- (id)conditionalChecks;
- (void).cxx_destruct;
- (id)eventPropertiesToMatch;
+ (id)eventMatcherWithConfiguration:;
+ (id)eventMatcherWithEventName:;
+ (id)eventMatcherWithEventName:properties:;
@end
