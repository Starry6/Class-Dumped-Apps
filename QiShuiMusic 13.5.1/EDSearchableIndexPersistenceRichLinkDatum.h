@interface EDSearchableIndexPersistenceRichLinkDatum : NSObject
@property (nonatomic) NSString richLinkItemIdentifier;
@property (nonatomic) NSString messagePersistentID;
@property (nonatomic) NSString richLinkID;
@property (nonatomic) q mailboxID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString url;
- (id)url;
- (void)setTitle:;
- (void)setUrl:;
- (id)title;
- (void).cxx_destruct;
- (void)setRichLinkID:;
- (id)richLinkID;
- (id)messagePersistentID;
- (long long)mailboxID;
- (void)setMailboxID:;
- (void)setMessagePersistentID:;
- (id)richLinkItemIdentifier;
- (void)setRichLinkItemIdentifier:;
@end
