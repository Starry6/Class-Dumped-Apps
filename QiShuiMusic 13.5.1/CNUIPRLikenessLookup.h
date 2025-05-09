@interface CNUIPRLikenessLookup : NSObject
@property (nonatomic) CNUIMeContactMonitor meMonitor;
@property (nonatomic) <CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) q prohibitedSources;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)silhouetteWithPlaceholderProviderFactory:contact:workScheduler:;
- (BOOL)mayIncludeSource:;
- (id)photoFutureForContactFuture:scheduler:;
- (id)meMonitor;
- (id)initWithContactStore:scheduler:;
- (id)contentObservableForContact:placeholderProviderFactory:options:workScheduler:;
- (id)remoteImagesObservableWithContactFuture:workScheduler:;
- (id)initWithContactStore:schedulerProvider:meMonitor:;
- (id)badgeObservableWithLikenessBadge:workScheduler:;
- (id)schedulerProvider;
- (id)blessedPhotoObservableWithFuture:contact:workScheduler:;
- (id)resolveLikenessesForContacts:workScheduler:withContentHandler:;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:;
- (id)basicMonogramObservableFromString:color:;
- (id)likenessesForContact:workScheduler:;
- (id)likenessesForContact:options:workScheduler:;
- (id)initWithContactStore:schedulerProvider:;
- (id)basicMonogramObservableWithContactFuture:monogramColor:;
- (id)placeholderProviderFactory;
- (long long)prohibitedSources;
- (id)likenessObservableForContact:placeholderProviderFactory:options:workScheduler:;
- (BOOL)isMeContact:;
- (void).cxx_destruct;
- (id)photoFutureForContactFuture:photoFuture:allowingFallbackForMeCard:;
- (id)contactStore;
- (id)initWithContactStore:scheduler:meMonitor:;
- (void)setProhibitedSources:;
- (void)setMeMonitor:;
- (void)setPlaceholderProviderFactory:;
+ (id)descriptorForRequiredKeys;
+ (id)basicMonogramObservableFromString:color:;
+ (id)contactFuture:contactStore:scheduler:;
+ (id)basicMonogramObservableForContactFuture:monogramColor:;
+ (id)observableFromLikenessProviderBlock:withScheduler:;
+ (id)photoObservableWithPhotoFuture:likenessFingerprint:scheduler:;
@end
