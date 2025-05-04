@interface AWEIMFTSComplexDataCache : NSObject
@property (nonatomic) NSCache groupNamePinyinCache;
@property (nonatomic) NSCache userNamePinyinCache;
@property (nonatomic) NSObject<OS_dispatch_semaphore> cacheModelSemaphore;
- (id)groupNamePinyinCache;
- (id)updateGroupNamePinyinOfConversation:;
- (id)userNamePinyinCache;
- (id)cacheModelSemaphore;
- (id)getGroupNamePinyinOfConversation:;
- (id)updateGroupNamePinyinOfConversationId:name:;
- (id)getUserPinyinModelOfUser:;
- (void)setGroupNamePinyinCache:;
- (void)setUserNamePinyinCache:;
- (void)setCacheModelSemaphore:;
- (id)init;
- (void).cxx_destruct;
@end
