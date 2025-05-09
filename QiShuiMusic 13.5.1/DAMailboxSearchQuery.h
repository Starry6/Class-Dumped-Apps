@interface DAMailboxSearchQuery : DASearchQuery
@property (nonatomic) NSString collectionID;
@property (nonatomic) NSInteger bodyType;
@property (nonatomic) q truncationSize;
@property (nonatomic) BOOL allOrNone;
@property (nonatomic) NSDate priorToDate;
@property (nonatomic) NSInteger MIMESupport;
@property (nonatomic) BOOL deepTraversal;
@property (nonatomic) BOOL rebuildResults;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)collectionID;
- (void)setCollectionID:;
- (void)setTruncationSize:;
- (void)setPriorToDate:;
- (void)setBodyType:;
- (void)setMIMESupport:;
- (void)setDeepTraversal:;
- (int)bodyType;
- (id)initWithSearchString:consumer:;
- (id)initWithSearchString:predicate:consumer:;
- (id)initWithDictionaryRepresentation:consumer:;
- (long long)truncationSize;
- (BOOL)allOrNone;
- (void)setAllOrNone:;
- (id)priorToDate;
- (int)MIMESupport;
- (BOOL)deepTraversal;
- (BOOL)rebuildResults;
- (void)setRebuildResults:;
+ (id)mailboxSearchQueryWithSearchString:predicate:consumer:;
+ (id)mailboxSearchQueryWithSearchString:consumer:;
@end
