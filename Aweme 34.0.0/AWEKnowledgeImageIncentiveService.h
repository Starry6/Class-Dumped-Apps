@interface AWEKnowledgeImageIncentiveService : HTSService
@property (nonatomic) NSDictionary cacheDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheDic;
- (void)setCacheDic:;
- (id)currentUserCache;
- (void)saveUserCache:;
- (BOOL)shouldShowImageIncentiveForModel:;
- (void)didShowImageIncentiveForModel:;
- (void)willShowModel:withHashCode:;
- (void).cxx_destruct;
@end
