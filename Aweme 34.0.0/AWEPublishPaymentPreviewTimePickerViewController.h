@interface AWEPublishPaymentPreviewTimePickerViewController : UIViewController
@property (nonatomic) DUXPicker picker;
@property (nonatomic) NSString barTitle;
@property (nonatomic) double maxDuration;
@property (nonatomic) double minDuration;
@property (nonatomic) double initialTime;
@property (nonatomic) NSMutableArray timeData;
@property (nonatomic) @? didClickConfirmAction;
@property (nonatomic) @? didClickCancelAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)barTitle;
- (long long)componentCountInDUXPicker:;
- (long long)duxPicker:numberOfRowsInComponent:;
- (id)duxPicker:titleForRow:forComponent:;
- (void)setBarTitle:;
- (void)setMinDuration:;
- (id)initWithBarTitle:maxDuration:minDuration:initialTime:;
- (void)setDidClickConfirmAction:;
- (void)configInitialTimeData;
- (id)didClickCancelAction;
- (id)didClickConfirmAction;
- (void)updatePickerIfNeededWhenChangedForComponent:row:;
- (id)timeData;
- (void)configTimeDataWithTime:;
- (id)configHours;
- (id)configMinutesWithHour:;
- (id)configSecondsWithHour:minute:;
- (void)selectRowWithTime:;
- (id)updateMinuteWhenChangeToHour:component:;
- (id)updateSecondWhenChangeToHour:minute:component:;
- (void)selectRowForIndexPath:;
- (long long)minMinuteWithHour:;
- (long long)maxMinuteWithHour:;
- (id)updateTimeWithComponent:shouldUpdateHandler:updateDataHandler:;
- (long long)minSecondWithHour:minute:;
- (long long)maxSecondWithHour:minute:;
- (void)setDidClickCancelAction:;
- (void)setTimeData:;
- (void)viewDidLoad;
- (double)getCurrentTime;
- (void).cxx_destruct;
- (void)setInitialTime:;
- (double)initialTime;
- (id)picker;
- (void)setupUI;
- (double)maxDuration;
- (void)setPicker:;
- (void)setMaxDuration:;
- (long long)maxHour;
- (long long)minHour;
- (double)minDuration;
@end
