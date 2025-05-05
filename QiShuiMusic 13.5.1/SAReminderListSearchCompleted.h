@interface SAReminderListSearchCompleted : SABaseCommand
@property (nonatomic) NSArray results;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
+ (id)listSearchCompleted;
+ (id)listSearchCompletedWithDictionary:context:;
@end
