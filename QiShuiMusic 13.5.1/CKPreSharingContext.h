@interface CKPreSharingContext : CKSharingContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray writableTypeIdentifiersForItemProvider;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)loadDataWithTypeIdentifier:forItemProviderCompletionHandler:;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:typeIdentifier:error:;
@end
