@interface ECServerMessage : NSObject
@property (nonatomic) NSString persistentID;
@property (nonatomic) NSString messagePersistentID;
@property (nonatomic) ECMessageFlags serverFlags;
@property (nonatomic) NSString remoteID;
@property (nonatomic) NSSet labels;
@property (nonatomic) @ remoteIDObject;
@property (nonatomic) I imapUID;
- (id)init;
- (unsigned long long)hash;
- (id)labels;
- (void).cxx_destruct;
- (id)serverFlags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setLabels:;
- (id)persistentID;
- (void)setPersistentID:;
- (id)initWithServerMessageBuilder:;
- (id)messagePersistentID;
- (id)remoteID;
- (void)setRemoteID:;
- (unsigned int)imapUID;
- (id)initWithIMAPServerMessageBuilder:;
- (void)setMessagePersistentID:;
- (void)setServerFlags:;
- (void)setImapUID:;
- (id)remoteIDObject;
@end
