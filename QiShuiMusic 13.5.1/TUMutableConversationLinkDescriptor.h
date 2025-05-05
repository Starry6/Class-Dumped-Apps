@interface TUMutableConversationLinkDescriptor : TUConversationLinkDescriptor
@property (nonatomic) BOOL activated;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSUUID groupUUID;
@property (nonatomic) NSSet invitedHandles;
@property (nonatomic) NSString name;
@property (nonatomic) TUConversationLinkOriginator originator;
@property (nonatomic) NSData privateKey;
@property (nonatomic) NSString pseudonym;
@property (nonatomic) NSData publicKey;
@property (nonatomic) NSInteger version;
@property (nonatomic) q linkLifetimeScope;
@end
