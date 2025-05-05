@interface IESLiveInteractiveBattleAnnounceViewConfig : NSObject
@property (nonatomic) NSArray announceArray;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIImage tipsIcon;
@property (nonatomic) UIImage closeIcon;
@property (nonatomic) NSString requestPage;
- (void)setRequestPage:;
- (id)announceArray;
- (id)closeIcon;
- (id)requestPage;
- (void)setAnnounceArray:;
- (void)setCloseIcon:;
- (void)setTipsIcon:;
- (id)tipsIcon;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)bgColor;
- (void)setBgColor:;
+ (id)teemFightConfig;
+ (id)gusetBattleConfig;
+ (id)roomBattleConfig;
@end
