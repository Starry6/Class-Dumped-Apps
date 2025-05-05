@interface CNUIPlaceholderProviderFactory : NSObject
@property (nonatomic) <CNScheduler> resourceLock;
@property (nonatomic) <CNScheduler> highPriorityLock;
@property (nonatomic) <CNUIPRLikenessProvider> placeholderProvider;
@property (nonatomic) <CNUIPRLikenessProvider> loadingPlaceholderProvider;
@property (nonatomic) <CNUIPRLikenessProvider> loadingGroupPlaceholderProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)loadingGroupPlaceholderProvider;
- (void)setHighPriorityLock:;
- (id)placeholderProviderForContact:;
- (id)loadingGroupPlaceholderProviderWithBackgroundStyle:;
- (void).cxx_destruct;
- (id)loadingPlaceholderProvider;
- (id)highPriorityLock;
- (id)placeholderProvider;
- (id)resourceLock;
- (void)setResourceLock:;
@end
