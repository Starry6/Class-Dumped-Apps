@interface LSResourceProxy : _LSQueryResult
@property (nonatomic) NSString localizedName;
@property (nonatomic) _LSBoundIconInfo _boundIconInfo;
@property (nonatomic) _LSLazyPropertyList _iconsDictionary;
@property (nonatomic) <LSIconResourceLocator> iconResourceLocator;
@property (nonatomic) BOOL boundIconIsBadge;
@property (nonatomic) NSDictionary iconsDictionary;
@property (nonatomic) NSString primaryIconName;
@property (nonatomic) Q propertyListCachingStrategy;
- (id)__IS_iconDataForVariant:withOptions:;
- (id)__IS_iconResourceLocator;
- (id)uniqueIdentifier;
- (id)localizedName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)iconDataForVariant:;
- (id)iconDataForVariant:withOptions:;
- (id)_initWithLocalizedName:;
- (BOOL)boundIconIsBadge;
- (id)iconResourceLocator;
- (id)iconsDictionary;
- (id)primaryIconName;
- (id)iconDataForStyle:width:height:options:;
- (id)_privateDocumentFileNamesAsCacheKey;
- (unsigned long long)propertyListCachingStrategy;
- (void)setPropertyListCachingStrategy:;
- (void)_setLocalizedName:;
- (id)_boundIconInfo;
- (void)_setBoundIconInfo:;
- (id)_iconsDictionary;
- (void)_setIconsDictionary:;
+ (id)_applicationIconCanvasSize;
+ (long long)_compareApplicationIconCanvasSize:withSize:;
+ (BOOL)__IS_canProvideResourceLocator;
+ (BOOL)supportsSecureCoding;
@end
