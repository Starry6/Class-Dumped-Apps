@interface CNUICoreWhitelistedContactsControllerOptions : NSObject
@property (nonatomic) BOOL shouldPrepopulateEmptyWhitelist;
@property (nonatomic) BOOL shouldRequireConfirmationOfChanges;
- (id)init;
- (id)initWithShouldPrepopulateEmptyWhitelist:shouldRequireConfirmationOfChanges:;
- (BOOL)shouldPrepopulateEmptyWhitelist;
- (BOOL)shouldRequireConfirmationOfChanges;
+ (id)iosOptions;
+ (id)macOptions;
+ (id)macOptionsLocal;
@end
