@interface CNPhotoPickerRecentsProvider : NSObject
@property (nonatomic) CNVisualIdentity visualIdentity;
@property (nonatomic) BOOL containsContactImage;
@property (nonatomic) BOOL containsMonogram;
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
- (id)providerItemForContactImage:size:scale:RTL:renderingQueue:callbackQueue:;
- (BOOL)containsContactImage;
- (void)setContainsContactImage:;
- (BOOL)containsMonogram;
- (void)setContainsMonogram:;
+ (id)log;
@end
