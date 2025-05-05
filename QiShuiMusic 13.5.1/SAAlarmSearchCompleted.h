@interface SAAlarmSearchCompleted : SABaseCommand
@property (nonatomic) NSArray results;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithResults:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:context:;
+ (id)searchCompletedWithResults:;
@end
