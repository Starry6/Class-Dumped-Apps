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
- (void)didFinishLogout;
- (long long)currentUnreadCount;
- (void)loadMarkRead;
- (long long)markReadCount;
- (void)p_markAsRead;
- (void)setCurrentUnreadCount:;
- (void)setMarkReadCount:;
- (void)setStorageKey:;
- (id)storageKey;
- (void)tryToMarkRead;
- (void)dealloc;
- (void)setDelegate:;
- (id)identifier;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
@end
