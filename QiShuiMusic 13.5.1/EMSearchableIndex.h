@interface EMSearchableIndex : NSObject
@property (nonatomic) EMRemoteConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRemoteConnection:;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)reindexSearchableItemsWithIdentifiers:acknowledgementHandler:;
+ (id)log;
+ (id)remoteInterface;
+ (id)attachmentPersistentIDFromItemIdentifier:;
+ (id)richLinkItemIdentifierFromSearchableItemIdentifier:;
+ (id)persistentIDForSearchableItem:;
@end
