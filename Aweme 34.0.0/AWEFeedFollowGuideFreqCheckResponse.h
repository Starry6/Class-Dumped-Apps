@interface AWEFeedFollowGuideFreqCheckResponse : AWEBaseApiModel
@property (nonatomic) BOOL passCheck;
@property (nonatomic) NSString notPassReason;
- (BOOL)passCheck;
- (void)setPassCheck:;
- (id)notPassReason;
- (void)setNotPassReason:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
