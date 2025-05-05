@interface EDExistingMessageWithMessageIDHeader : NSObject
@property (nonatomic) ECAngleBracketIDHash messageIDHash;
@property (nonatomic) ECServerMessage serverMessage;
@property (nonatomic) q messagePersistentID;
- (void).cxx_destruct;
- (long long)messagePersistentID;
- (id)messageIDHash;
- (id)serverMessage;
- (id)initWithMessageIDHash:serverMessage:messagePersistentID:;
@end
