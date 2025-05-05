@interface CNPhotoPickerAccountPhotoProvider : NSObject
@property (nonatomic) CNVisualIdentity visualIdentity;
@property (nonatomic) BOOL includeUnifiedContactImages;
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
- (id)initWithVisualIdentity:includeUnifiedContactImages:;
- (id)providerItemForVisualIdentity:forSize:scale:RTL:renderingQueue:callbackQueue:itemDelegate:;
- (BOOL)includeUnifiedContactImages;
- (void)setIncludeUnifiedContactImages:;
@end
