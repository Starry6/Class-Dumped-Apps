@interface SASmsRecipientSearchCompleted : SABaseCommand
@property (nonatomic) NSArray recipients;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recipients;
- (id)groupIdentifier;
- (void)setRecipients:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)recipientSearchCompleted;
+ (id)recipientSearchCompletedWithDictionary:context:;
@end
