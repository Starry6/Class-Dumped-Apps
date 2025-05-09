@interface AWELeftSideBarCellSubEntranceClickModel : NSObject
@property (nonatomic) NSString barID;
@property (nonatomic) NSString barTitle;
@property (nonatomic) NSString barStatus;
@property (nonatomic) q redDotStyle;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString itemTitle;
@property (nonatomic) q itemOrder;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString moduleID;
@property (nonatomic) NSString modulePos;
@property (nonatomic) NSString displayingSubtitleText;
@property (nonatomic) BOOL isOpenSecondPageVC;
- (void)setExtraParams:;
- (id)extraParams;
- (id)barTitle;
- (void)setRedDotStyle:;
- (id)barID;
- (void)setBarID:;
- (void)setBarTitle:;
- (id)modulePos;
- (void)setModulePos:;
- (id)displayingSubtitleText;
- (void)setDisplayingSubtitleText:;
- (id)barStatus;
- (void)setBarStatus:;
- (long long)redDotStyle;
- (long long)itemOrder;
- (void)setItemOrder:;
- (BOOL)isOpenSecondPageVC;
- (void)setIsOpenSecondPageVC:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)moduleID;
- (void)setModuleID:;
@end
