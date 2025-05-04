@interface AWEConcernFeedRequestForceInsertParamProvider : NSObject
@property (nonatomic) Q fakeStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)fakeStrategy;
- (id)extraParamsWithPullType:currentParams:;
- (id)forceInsertParamsWithCurrentParams:;
- (id)aidCacheParams:;
- (id)fakeRefreshParams:;
- (id)aAWEConcernForceInsertAdaper;
- (void)setFakeStrategy:;
+ (Class)aAWEConcernForceInsertAdaperClass;
@end
