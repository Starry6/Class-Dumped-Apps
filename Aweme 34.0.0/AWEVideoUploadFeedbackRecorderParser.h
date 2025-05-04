@interface AWEVideoUploadFeedbackRecorderParser : NSObject
@property (nonatomic) NSDictionary feedbackLabelAndDescDict;
@property (nonatomic) NSDictionary stageOptionAndNameDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedbackLabelAndDescDict;
- (void)setFeedbackLabelAndDescDict:;
- (id)stageOptionAndNameDict;
- (void)setStageOptionAndNameDict:;
- (long long)type;
- (id)parse:;
- (void).cxx_destruct;
+ (id)uploadStatusLabelDict;
@end
