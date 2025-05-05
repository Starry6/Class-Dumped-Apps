@interface SAUILParseExpressionsCompleted : SABaseCommand
@property (nonatomic) NSArray parsedExpressions;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)parsedExpressions;
- (void)setParsedExpressions:;
+ (id)parseExpressionsCompleted;
+ (id)parseExpressionsCompletedWithDictionary:context:;
@end
