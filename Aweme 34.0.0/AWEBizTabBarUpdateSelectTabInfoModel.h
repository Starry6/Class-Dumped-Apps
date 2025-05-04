@interface AWEBizTabBarUpdateSelectTabInfoModel : NSObject
@property (nonatomic) NSString previousTabId;
@property (nonatomic) q previousItemType;
@property (nonatomic) q selectedItemType;
@property (nonatomic) q selectTabType;
- (void)setPreviousTabId:;
- (void)setPreviousItemType:;
- (void)setSelectTabType:;
- (id)previousTabId;
- (long long)previousItemType;
- (long long)selectTabType;
- (void).cxx_destruct;
- (long long)selectedItemType;
- (void)setSelectedItemType:;
@end
