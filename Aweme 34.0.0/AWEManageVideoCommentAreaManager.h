@interface AWEManageVideoCommentAreaManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didUpdateIMSetting:source:currentModel:;
- (void)getUserAuthorizationStateFromCache;
- (BOOL)getCommentTrendGoodsAuthState;
- (BOOL)getCommentRelatedReadingAuthState;
- (BOOL)getCommentRelatedVideoAuthState;
- (BOOL)getVideoSearchSameGoodsAuthState;
- (BOOL)getCommentRelatedSearchAuthState;
- (void)setCommentTrendGoodsAuthState:;
- (void)setCommentRelatedReadingAuthState:;
- (void)setCommentRelatedVideoAuthState:;
- (void)setVideoSearchSameGoodsAuthState:;
- (void)setCommentRelatedSearchAuthState:;
- (void)postUserAuthorizationState:forKey:;
- (BOOL)getUserAuthorizationStateForKey:;
- (void)setUserAuthorizationState:ForKey:;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
