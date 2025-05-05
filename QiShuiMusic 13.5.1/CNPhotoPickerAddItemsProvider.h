@interface CNPhotoPickerAddItemsProvider : NSObject
@property (nonatomic) CNVisualIdentity visualIdentity;
@property (nonatomic) BOOL allowsTakePhotoItem;
@property (nonatomic) BOOL allowsPhotoFromLibraryItem;
@property (nonatomic) BOOL allowsMonograms;
@property (nonatomic) BOOL allowsEmoji;
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
- (id)initWithVisualIdentity:allowsTakePhotoItem:allowsPhotoFromLibraryItem:allowsMonograms:allowsEmoji:;
- (id)addItemOfType:;
- (id)symbolImageNameForAddItemType:;
- (BOOL)allowsTakePhotoItem;
- (void)setAllowsTakePhotoItem:;
- (BOOL)allowsPhotoFromLibraryItem;
- (void)setAllowsPhotoFromLibraryItem:;
- (BOOL)allowsMonograms;
- (void)setAllowsMonograms:;
- (BOOL)allowsEmoji;
- (void)setAllowsEmoji:;
@end
