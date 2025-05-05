@interface EMThreadScope : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) EMMailboxScope mailboxScope;
@property (nonatomic) NSPredicate filterPredicate;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (id)mailboxScope;
- (id)cachedSelf;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)filterPredicate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMailboxScope:filterPredicate:;
+ (BOOL)supportsSecureCoding;
@end
