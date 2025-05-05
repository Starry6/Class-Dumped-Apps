@interface ICLiveLinkQueueEventContentPlayedNow : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) q containerKind;
@property (nonatomic) NSString containerMediaIdentifier;
@property (nonatomic) NSArray itemIdentifiers;
@property (nonatomic) NSString startItemIdentifier;
- (id)itemIdentifiers;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)description;
- (long long)containerKind;
- (id)containerMediaIdentifier;
- (id)initWithItemIdentifiers:containerKind:containerIdentifier:containerMediaIdentifier:startItemIdentifier:;
- (id)startItemIdentifier;
@end
