@interface AWEUlikeAccountService : HTSService
@property (nonatomic) ACCThreadSafeMutableDictionary authInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authInfoWithSource:;
- (void)fetchAuthInfoWithSource:completion:;
- (id)authInfos;
- (id)cacheKeyWithSource:;
- (void)setAuthInfos:;
- (id)init;
- (void).cxx_destruct;
@end
