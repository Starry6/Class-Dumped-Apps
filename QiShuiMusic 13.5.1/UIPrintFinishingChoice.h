@interface UIPrintFinishingChoice : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q finishingChoiceID;
@property (nonatomic) NSDictionary finishingChoiceInfo;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)initWithTitle:finishingChoiceID:finishingChoiceInfo:;
- (long long)finishingChoiceID;
- (void)setFinishingChoiceID:;
- (id)finishingChoiceInfo;
- (void)setFinishingChoiceInfo:;
@end
