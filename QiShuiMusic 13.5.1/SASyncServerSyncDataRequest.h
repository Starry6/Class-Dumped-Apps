@interface SASyncServerSyncDataRequest : SABaseCommand
@property (nonatomic) NSString assistantId;
@property (nonatomic) NSString clientGeneration;
@property (nonatomic) NSString syncType;
@property (nonatomic) NSString syncToken;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSyncToken:;
- (id)groupIdentifier;
- (id)syncToken;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)assistantId;
- (void)setAssistantId:;
- (id)syncType;
- (void)setSyncType:;
- (id)clientGeneration;
- (void)setClientGeneration:;
@end
