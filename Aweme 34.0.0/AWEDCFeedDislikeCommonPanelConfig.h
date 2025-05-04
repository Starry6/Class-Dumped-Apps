@interface AWEDCFeedDislikeCommonPanelConfig : AWEDCFeedBaseConfig
@property (nonatomic) NSString feedbackSectionTitle;
@property (nonatomic) NSArray feedbackInfo;
@property (nonatomic) q maxLines;
- (id)feedbackInfo;
- (void)setFeedbackInfo:;
- (void)setupDefaultConfig;
- (void)updateConfigWithDictionary:;
- (void)setFeedbackSectionTitle:;
- (id)feedbackSectionTitle;
- (long long)maxLines;
- (void)setMaxLines:;
- (void).cxx_destruct;
@end
