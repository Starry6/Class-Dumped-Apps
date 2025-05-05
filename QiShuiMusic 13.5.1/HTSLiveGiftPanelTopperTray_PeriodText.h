@interface HTSLiveGiftPanelTopperTray_PeriodText : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger dailyShowTimes;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSInteger panelEnum;
@property (nonatomic) NSInteger key;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
