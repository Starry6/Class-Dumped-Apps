@interface CNPhotoPickerAnimojiProvider : NSObject
@property (nonatomic) <AVTAvatarStore> avatarStore;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (BOOL)canCreateMemoji;
- (id)avatarStore;
- (id)initWithVisualIdentity:;
- (id)loadItemsForSize:scale:RTL:renderingQueue:callbackQueue:itemDelegate:;
- (id)initWithVisualIdentity:avatarStore:;
+ (id)providerItemForAvatarRecord:;
+ (id)providerItemForAvatarRecord:imageProvider:renderingQueue:callbackQueue:;
@end
