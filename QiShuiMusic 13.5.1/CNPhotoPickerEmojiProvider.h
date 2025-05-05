@interface CNPhotoPickerEmojiProvider : NSObject
@property (nonatomic) CNVisualIdentity visualIdentity;
@property (nonatomic) CNPhotoPickerVariantsManager variantsManager;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)variantsManager;
- (void)setVariantsManager:;
- (id)visualIdentity;
- (id)initWithVisualIdentity:;
- (id)loadItemsForSize:scale:RTL:renderingQueue:callbackQueue:itemDelegate:;
@end
