@interface AWEEMusicSearchGlobalDoodleConfigModel : MTLModel
@property (nonatomic) BOOL showFeedback;
@property (nonatomic) NSString feedbackTitle;
@property (nonatomic) NSString feedbackSubtitle;
@property (nonatomic) NSDictionary feedbackIntentInfo;
@property (nonatomic) AWESearchFeelGoodEntranceIconModel feedbackEntranceIcon;
@property (nonatomic) q feedbackShowTipsType;
@property (nonatomic) double feedbackShowTipsDurationMS;
@property (nonatomic) double feedbackShowTipsStartDelayMS;
@property (nonatomic) q feedbackEntranceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showFeedback;
- (void)setShowFeedback:;
- (id)feedbackTitle;
- (void)setFeedbackTitle:;
- (id)feedbackSubtitle;
- (void)setFeedbackSubtitle:;
- (id)feedbackIntentInfo;
- (void)setFeedbackIntentInfo:;
- (id)feedbackEntranceIcon;
- (void)setFeedbackEntranceIcon:;
- (long long)feedbackShowTipsType;
- (void)setFeedbackShowTipsType:;
- (double)feedbackShowTipsDurationMS;
- (void)setFeedbackShowTipsDurationMS:;
- (double)feedbackShowTipsStartDelayMS;
- (void)setFeedbackShowTipsStartDelayMS:;
- (long long)feedbackEntranceType;
- (void)setFeedbackEntranceType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
