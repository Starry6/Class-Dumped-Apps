@interface CNiOSEncodedPeopleFetcher : NSObject
@property (nonatomic) BOOL preferLinkIdentifiersForIdentifierAudit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithFetchRequest:addressBook:managedConfiguration:addressBookCompletionHandler:cursorCompletionHandler:environment:identifierAuditMode:;
- (void)setPreferLinkIdentifiersForIdentifierAudit:;
- (BOOL)fetchEncodedPeopleWithError:cancelationToken:batchHandler:;
- (void).cxx_destruct;
- (void)fetchNextBatchWithReply:;
- (BOOL)preferLinkIdentifiersForIdentifierAudit;
@end
