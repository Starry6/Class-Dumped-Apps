@interface AWECommentTrackManager : NSObject
@property (nonatomic) NSDictionary videoPlayParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVideoPlayParams:;
- (id)videoPlayParams;
- (void).cxx_destruct;
+ (id)zeroCommentPostTrackParams;
+ (void)setZeroCommentPostTrackParams:;
+ (id)obtainCommentPostCommonParams;
+ (id)obtainCommentMediaFeedTrackParams;
+ (void)clearCommentPostCommonParams;
+ (void)addVideoPlayTrackParamsTo:forAweme:;
+ (id)commentTrackingModel;
+ (id)addCommentParams:generalModel:commentModel:textExtras:params:;
+ (void)reportCommentSendSliWithAwemeID:extra:;
+ (void)showDebugInfo;
+ (void)resetVideoPlayCommentTrackParams;
+ (id)videoPlayCommentTrackParams;
+ (void)commentSendBeginWithAwemeID:;
+ (id)shareInstance;
@end
