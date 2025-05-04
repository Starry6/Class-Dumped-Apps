@interface AWEIMSchoolGroupVerifyViewModel : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) q currentYear;
@property (nonatomic) NSString college;
@property (nonatomic) q selectedYear;
@property (nonatomic) BOOL autoSendIntroduceEnable;
@property (nonatomic) BOOL isEnableContinue;
@property (nonatomic) double lastSubmitTimestamp;
- (BOOL)autoSendIntroduceEnable;
- (void)setAutoSendIntroduceEnable:;
- (void)setCollege:;
- (long long)selectedYear;
- (long long)currentYear;
- (void)setSelectedYear:;
- (double)lastSubmitTimestamp;
- (void)setLastSubmitTimestamp:;
- (id)college;
- (void)refreshEnableContinueState;
- (BOOL)isEnableContinue;
- (long long)__currentYear;
- (void)setIsEnableContinue:;
- (id)init;
- (id)conversationID;
- (void).cxx_destruct;
- (id)initWithConversationID:;
@end
