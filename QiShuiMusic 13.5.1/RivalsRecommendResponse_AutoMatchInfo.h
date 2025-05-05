@interface RivalsRecommendResponse_AutoMatchInfo : IESLivePBBaseMessage
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q waitSec;
@property (nonatomic) BOOL hitHighWay;
@property (nonatomic) q accelerateLimit;
@property (nonatomic) RivalsRecommendResponse_AutoMatchInfoConfig config;
@property (nonatomic) BOOL hasConfig;
@property (nonatomic) q defaultWaitLimit;
@property (nonatomic) HTSLiveText matchText;
@property (nonatomic) BOOL hasMatchText;
@property (nonatomic) HTSLiveText newAnchorMatchText;
@property (nonatomic) BOOL hasNewAnchorMatchText;
+ (id)descriptor;
@end
