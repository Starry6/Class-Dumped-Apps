@interface AWEPluginRankListImpl : NSObject
@property (nonatomic) BOOL hasShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bussinessErrorWithError:data:;
- (void)showRankListViewWithModelIfNeed:uniqueID:error:;
- (void)bdp_openRankListForUniqueID:withParam:completion:;
- (void)bdp_getRankDataForUniqueID:withParam:completion:;
- (void)bdp_setRankDataForUniqueID:withParam:completion:;
- (BOOL)hasShown;
- (void)setHasShown:;
+ (id)sharedPlugin;
@end
