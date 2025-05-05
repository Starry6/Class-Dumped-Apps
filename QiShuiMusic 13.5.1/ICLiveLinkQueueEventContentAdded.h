@interface ICLiveLinkQueueEventContentAdded : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) q containerKind;
@property (nonatomic) NSString containerMediaIdentifier;
@property (nonatomic) NSArray itemIdentifiers;
- (id)itemIdentifiers;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItemIdentifiers:containerKind:containerIdentifier:containerMediaIdentifier:;
- (long long)containerKind;
- (id)containerMediaIdentifier;
@end
