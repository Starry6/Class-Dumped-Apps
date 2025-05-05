@interface IESLivePrivilegeDanmakuTabViewModel : NSObject
@property (nonatomic) HTSLiveTabItem tabItem;
@property (nonatomic) BOOL selected;
@property (nonatomic) @? didSelected;
@property (nonatomic) q style;
@property (nonatomic) BOOL isDivider;
@property (nonatomic) BOOL isCancel;
- (void)setDidSelected:;
- (id)tabItem;
- (id)didSelected;
- (BOOL)isDivider;
- (void)setIsDivider:;
- (void)setTabItem:;
- (BOOL)selected;
- (void)setSelected:;
- (void)setStyle:;
- (void).cxx_destruct;
- (long long)style;
- (BOOL)isCancel;
- (void)setIsCancel:;
@end
