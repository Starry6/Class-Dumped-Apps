@interface CNUIDraftSupport : NSObject
+ (void)deleteDrafts;
+ (id)loadDraft:;
+ (id)loadNewContactDraft;
+ (void)saveNewContactDraft:;
@end
