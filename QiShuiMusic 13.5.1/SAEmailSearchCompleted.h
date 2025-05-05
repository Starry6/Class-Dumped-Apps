@interface SAEmailSearchCompleted : SABaseCommand
@property (nonatomic) NSArray emailResults;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initWithEmailResults:;
- (id)emailResults;
- (void)setEmailResults:;
+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:context:;
+ (id)searchCompletedWithEmailResults:;
@end
