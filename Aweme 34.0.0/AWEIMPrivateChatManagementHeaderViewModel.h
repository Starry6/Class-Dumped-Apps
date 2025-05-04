@interface AWEIMPrivateChatManagementHeaderViewModel : NSObject
@property (nonatomic) NSDictionary titleStringDict;
@property (nonatomic) NSString titleString;
@property (nonatomic) NSString filterString;
@property (nonatomic) NSString filterImageIcon;
@property (nonatomic) Q selectType;
@property (nonatomic) BOOL canShowBubble;
@property (nonatomic) BOOL isFilterTabSelected;
- (unsigned long long)selectType;
- (void)switchTabWithType:;
- (BOOL)canShowBubble;
- (void)setCanShowBubble:;
- (void)setSelectType:;
- (id)titleStringDict;
- (void)setTitleStringDict:;
- (id)filterImageIcon;
- (BOOL)isFilterTabSelected;
- (void)setFilterImageIcon:;
- (void)setIsFilterTabSelected:;
- (id)init;
- (void).cxx_destruct;
- (void)setTitleString:;
- (id)titleString;
- (id)filterString;
- (void)setFilterString:;
@end
