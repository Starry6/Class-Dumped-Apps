@interface AWEHashtagHistoryManager : NSObject
@property (nonatomic) NSArray savedHashtags;
@property (nonatomic) NSArray savedPrivateHashtags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)p_discardOldUserHistoryIfNeeded;
- (void)saveHashtags:;
- (void)saveHashtags:isPrivate:;
- (id)savedHashtags;
- (id)savedPrivateHashtags;
- (id)getStorageDataWithKey:isPrivate:;
- (void)saveHashtags:isPrivate:withStorageKey:;
- (void)setSavedHashtags:;
- (void)setSavedPrivateHashtags:;
- (BOOL)checkHashtagIfSaved:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoad;
+ (void)saveHashtags:;
+ (void)saveHashtags:isPrivate:;
+ (id)savedHashtags;
+ (id)savedPrivateHashtags;
+ (id)sharedInstance;
@end
