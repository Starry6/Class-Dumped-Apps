@interface ISAliasIcon : ISConcreteIcon
@property (nonatomic) @ alias;
@property (nonatomic) ISConcreteIcon resolvedIcon;
@property (nonatomic) ISConcreteIcon icon;
- (id)alias;
- (id)icon;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)makeResourceProvider;
- (void).cxx_destruct;
- (id)decorations;
- (id)description;
- (void)resolve;
- (id)initWithBookmarkData:;
- (id)initWithAliasURL:;
- (id)initWithBookmarkData:decorations:;
- (id)resolvedIcon;
+ (BOOL)supportsSecureCoding;
+ (id)aliasUUID;
+ (id)_iconForBookmarkData:;
+ (id)_iconForValues:;
@end
