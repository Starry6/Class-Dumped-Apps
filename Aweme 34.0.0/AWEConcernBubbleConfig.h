@interface AWEConcernBubbleConfig : NSObject
@property (nonatomic) q mode;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) <AWEInteractNotificationProtocol> authorInfo;
@property (nonatomic) NSArray firstOriginURLList;
@property (nonatomic) NSArray secondOriginURLList;
@property (nonatomic) NSString yellowDotComponentID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)yellowDotComponentID;
- (id)authorInfo;
- (id)firstOriginURLList;
- (void)setAuthorInfo:;
- (void)setYellowDotComponentID:;
- (void)setFirstOriginURLList:;
- (id)secondOriginURLList;
- (void)setSecondOriginURLList:;
- (void)setMode:;
- (long long)mode;
- (void).cxx_destruct;
- (id)mainTitle;
- (void)setMainTitle:;
+ (double)maxBubbleLabelWidth;
+ (id)animationConfigWithMode:authorInfo:;
+ (id)nicknameLengthTruncate:noticeText:;
@end
