@interface CNUICoreContactPropertyFilterBuilder : NSObject
@property (nonatomic) BOOL excludeNickname;
@property (nonatomic) BOOL excludePhoto;
@property (nonatomic) BOOL excludeNote;
@property (nonatomic) BOOL excludeRelationships;
- (id)build;
- (BOOL)excludeNickname;
- (void)setExcludeNickname:;
- (BOOL)excludePhoto;
- (void)setExcludePhoto:;
- (BOOL)excludeNote;
- (void)setExcludeNote:;
- (BOOL)excludeRelationships;
- (void)setExcludeRelationships:;
+ (id)managedContactsFilterBuilder;
+ (id)whitelistedContactsFilterBuilder;
@end
