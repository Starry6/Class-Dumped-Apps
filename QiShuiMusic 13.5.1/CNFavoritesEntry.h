@interface CNFavoritesEntry : NSObject
@property (nonatomic) NSInteger abUid;
@property (nonatomic) NSInteger abIdentifier;
@property (nonatomic) NSString actionChannel;
@property (nonatomic) NSInteger oldAbUid;
@property (nonatomic) BOOL dirty;
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) CNContactProperty contactProperty;
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) q type;
- (void)performActionWithContext:completion:;
- (void)performActionWithCompletion:;
- (void)performActionWithExtensionContext:completion:;
- (void)setDirty:;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)actionType;
- (void)setValue:;
- (long long)type;
- (BOOL)dirty;
- (void).cxx_destruct;
- (id)value;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)contactProperty;
- (id)initWithContact:propertyKey:identifier:type:;
- (id)initWithContact:propertyKey:identifier:type:store:;
- (id)initWithContact:propertyKey:labeledValueIdentifier:actionType:bundleIdentifier:store:;
- (id)initWithDictionaryRepresentation:store:;
- (void)dictionaryRepresentation:isDirty:;
- (id)rematch;
- (BOOL)rematchWithContacts;
- (BOOL)rematchWithGeminiManager:;
- (void)resetContactMatch;
- (void)applyChangeRecord:;
- (int)abUid;
- (void)setAbUid:;
- (int)abIdentifier;
- (void)setAbIdentifier:;
- (id)actionChannel;
- (void)setActionChannel:;
- (int)oldAbUid;
- (void)setOldAbUid:;
+ (id)favoritesEntryForUserActionItem:;
+ (id)descriptorsForRequiredKeysForPropertyKey:;
@end
