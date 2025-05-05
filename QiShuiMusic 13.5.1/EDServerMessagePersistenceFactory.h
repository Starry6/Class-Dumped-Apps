@interface EDServerMessagePersistenceFactory : NSObject
@property (nonatomic) EDPersistenceDatabase database;
@property (nonatomic) EDGmailLabelPersistence gmailLabelPersistence;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:gmailLabelPersistence:;
- (id)database;
- (id)serverMessagePersistenceForMailboxURL:;
- (id)gmailLabelPersistence;
@end
