@interface EMCachingContactStore : NSObject
@property (nonatomic) EFLazyCache displayNameCache;
@property (nonatomic) CNContactStore cnStore;
- (id)init;
- (id)initWithStore:;
- (void).cxx_destruct;
- (void)_invalidateDisplayNameCache;
- (id)displayNameForEmailAddress:;
- (id)displayNameForEmailAddress:abbreviated:;
- (id)_fetchDisplayNameForEmailAddress:abbreviated:;
- (id)cnStore;
- (id)displayNameCache;
- (void)setDisplayNameCache:;
@end
