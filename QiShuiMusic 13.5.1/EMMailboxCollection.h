@interface EMMailboxCollection : EMCollection
@property (nonatomic) EMMailboxRepository repository;
- (void)setRepository:;
- (id)initWithObjectID:query:;
- (id)initWithCoder:;
- (id)initWithAccount:topLevelOnly:repository:;
- (void)encodeWithCoder:;
- (id)initWithMailbox:;
- (id)repository;
- (id)initWithMailbox:repository:;
- (id)initWithAccount:topLevelOnly:;
+ (BOOL)supportsSecureCoding;
@end
