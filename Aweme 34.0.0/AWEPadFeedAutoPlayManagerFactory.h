@interface AWEPadFeedAutoPlayManagerFactory : NSObject
@property (nonatomic) NSMutableDictionary autoPlayManagerFeedTypeMap;
@property (nonatomic) BOOL allFeedApplyAutoPlay;
@property (nonatomic) NSSet blackList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)blackList;
- (void)setBlackList:;
- (id)autoPlayManagerWithReferString:;
- (BOOL)allFeedApplyAutoPlay;
- (id)autoPlayManagerFeedTypeMap;
- (id)createAutoPlayManagerWithReferString:;
- (void)setAutoPlayManagerFeedTypeMap:;
- (void)setAllFeedApplyAutoPlay:;
- (id)init;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)sharedFactory;
@end
