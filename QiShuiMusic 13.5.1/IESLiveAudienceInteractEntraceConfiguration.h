@interface IESLiveAudienceInteractEntraceConfiguration : NSObject
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showTip;
@property (nonatomic) BOOL disabled;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString title;
@property (nonatomic) @? didClick;
- (BOOL)showTip;
- (id)didClick;
- (void)setDidClick:;
- (void)setShowTip:;
- (BOOL)selected;
- (void)setDisabled:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)icon;
- (void)setSelected:;
- (void)setSubtitle:;
- (void)setTitle:;
- (BOOL)disabled;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)subtitle;
@end
