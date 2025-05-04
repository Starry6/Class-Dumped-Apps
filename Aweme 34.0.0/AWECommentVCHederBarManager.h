@interface AWECommentVCHederBarManager : NSObject
@property (nonatomic) NSMutableDictionary componentCtrlDict;
@property (nonatomic) NSMapTable contextTable;
- (id)componentCtrlDict;
- (id)contextTable;
- (void)setComponentCtrlDict:;
- (void)setContextTable:;
- (void).cxx_destruct;
+ (BOOL)shouldHideForComponentCtrl:barType:model:;
+ (BOOL)shouldShowCommentVCHeaderBar:;
+ (void)handleCommentVCHeaderBarAppearByContext:bottomContainer:leftContainer:isNew:;
+ (BOOL)shouldShowMaskVCHeaderBar:;
+ (unsigned long long)barTypeByElementName:;
+ (id)sharedInstance;
@end
