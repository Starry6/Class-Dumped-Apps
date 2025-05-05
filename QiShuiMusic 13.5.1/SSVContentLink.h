@interface SSVContentLink : NSObject
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSNumber itemIdentifier;
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString providerName;
@property (nonatomic) NSString searchTerm;
@property (nonatomic) q contentKind;
@property (nonatomic) q targetApplication;
@property (nonatomic) NSURL URL;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (void)setSearchTerm:;
- (void)setProviderName:;
- (id)providerName;
- (id)searchTerm;
- (void).cxx_destruct;
- (id)URL;
- (id)itemTitle;
- (id)categoryName;
- (void)setCategoryName:;
- (void)setItemTitle:;
- (id)_stringForContentKind:;
- (long long)_targetApplicationWithContentKind:;
- (id)_URLSchemeWithApplication:;
- (long long)contentKind;
- (void)setContentKind:;
- (long long)targetApplication;
- (void)setTargetApplication:;
@end
