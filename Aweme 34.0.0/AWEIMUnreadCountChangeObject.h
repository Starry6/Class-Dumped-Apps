@interface AWEIMUnreadCountChangeObject : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString storageKey;
@property (nonatomic) q markReadCount;
@property (nonatomic) q currentUnreadCount;
@property (nonatomic) <AWEIMUnreadCountChangeDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (long long)currentUnreadCount;
- (void)setCurrentUnreadCount:;
- (id)storageKey;
- (void)setStorageKey:;
- (long long)markReadCount;
- (void)tryToMarkRead;
- (void)loadMarkRead;
- (void)p_markAsRead;
- (void)setMarkReadCount:;
- (void)dealloc;
- (id)delegate;
- (void)setIdentifier:;
- (id)initWithIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
