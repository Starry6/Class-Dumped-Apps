@interface CNPhotoPickerMonogramProvider : NSObject
@property (nonatomic) CNVisualIdentity visualIdentity;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)visualIdentity;
- (id)initWithVisualIdentity:;
- (id)loadItemsForSize:scale:RTL:renderingQueue:callbackQueue:itemDelegate:;
+ (id)providerItemForVisualIdentity:size:RTL:;
+ (id)providerItemForVisualIdentity:size:scale:RTL:backgroundColor:;
+ (id)monogramProviderItemForVisualIdentity:size:scale:RTL:isVariantOptionItem:backgroundColor:;
+ (id)generateMonogramItemForVisualIdentity:size:scale:RTL:isVariantOptionItem:backgroundColor:;
@end
