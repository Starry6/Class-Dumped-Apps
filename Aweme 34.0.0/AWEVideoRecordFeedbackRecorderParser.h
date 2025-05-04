@interface AWEVideoRecordFeedbackRecorderParser : NSObject
@property (nonatomic) NSDictionary feedbackLabelAndDescDict;
@property (nonatomic) NSArray sectionSortArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedbackLabelAndDescDict;
- (void)setFeedbackLabelAndDescDict:;
- (id)sectionSortArray;
- (void)setSectionSortArray:;
- (long long)type;
- (id)parse:;
- (void).cxx_destruct;
+ (id)recordStatusLabelDict;
+ (id)camInitStatusLabelDict;
@end
