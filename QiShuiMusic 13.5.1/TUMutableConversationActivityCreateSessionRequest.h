@interface TUMutableConversationActivityCreateSessionRequest : TUConversationActivityCreateSessionRequest
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSString activityIdentifier;
@property (nonatomic) NSData applicationContext;
@property (nonatomic) TUConversationActivityMetadata metadata;
@property (nonatomic) CKShare share;
@property (nonatomic) BOOL staticActivity;
@end
