@interface CNPhotoPickerPhotoFacesProvider : NSObject
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
- (id)getItemsFromPhotoLibraryWithItemDelegate:;
- (id)cropRectForAsset:face:;
+ (id)log;
@end
