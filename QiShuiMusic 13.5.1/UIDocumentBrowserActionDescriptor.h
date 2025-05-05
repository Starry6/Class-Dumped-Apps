@interface UIDocumentBrowserActionDescriptor : NSObject
@property (nonatomic) NSString uiActionProviderIdentifier;
@property (nonatomic) NSString fileProviderIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) BOOL displayInline;
- (id)identifier;
- (id)displayName;
- (id)predicate;
- (void).cxx_destruct;
- (id)fileProviderIdentifier;
- (id)initWithIdentifier:uiActionProviderIdentifier:fileProviderIdentifier:displayName:predicate:displayInline:;
- (id)uiActionProviderIdentifier;
- (BOOL)displayInline;
@end
