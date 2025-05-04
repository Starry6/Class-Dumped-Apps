@interface AWESearchAIGCTimestampView : AWESearchCachalotBaseCardView
@property (nonatomic) UILabel timestampLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)componentView;
- (void)setTimestampLabel:;
- (id)timestampLabel;
- (void)updateWithViewModel:;
- (void)createUI;
+ (id)converTimeStampToTextForChatV2:;
+ (id)sizeWithViewModel:width:;
+ (id)beforeDawnTimeFormatter;
+ (double)secondsForADay;
+ (id)p_getWeekStringFromWeekV2:;
+ (id)shortDateFormatterForD_V2;
+ (id)dateFormatterForD_V2;
@end
