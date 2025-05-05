@interface PLPersistentHistoryTransactionModifiers : NSObject
@property (nonatomic) BOOL syncChangeMarker;
@property (nonatomic) NSInteger changeSource;
@property (nonatomic) BOOL isSyncable;
- (void)setChangeSource:;
- (id)init;
- (int)changeSource;
- (id)_pl_prettyDescriptionWithIndent:;
- (BOOL)syncChangeMarker;
- (id)encodeAsTransactionAuthor;
- (void)setSyncChangeMarker:;
- (BOOL)updateFromTransactionAuthor:;
- (BOOL)isSyncable;
- (id)description;
- (id)initWithChangeSource:syncChangeMarker:;
- (id)_descriptionWithBuilder:;
+ (id)transactionAuthorFromChangeSource:syncChangeMarker:;
+ (id)transactionAuthorFromChangeSource:;
+ (id)transactionModifiersFromTransactionAuthor:;
@end
