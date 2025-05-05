@interface IESLiveSaaSGuideSettingPanelLayout : NSObject
@property (nonatomic) Q style;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) BOOL hasHeaderTitle;
@property (nonatomic) BOOL useAutoLayout;
- (BOOL)hasHeaderTitle;
- (void)setHasHeaderTitle:;
- (void)setUseAutoLayout:;
- (BOOL)useAutoLayout;
- (id)init;
- (void)setHasCloseButton:;
- (void)setStyle:;
- (BOOL)hasCloseButton;
- (unsigned long long)style;
@end
