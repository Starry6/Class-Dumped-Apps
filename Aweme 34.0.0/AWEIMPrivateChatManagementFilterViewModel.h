@interface AWEIMPrivateChatManagementFilterViewModel : NSObject
@property (nonatomic) NSDictionary titleStringDict;
@property (nonatomic) Q selectTabCount;
@property (nonatomic) Q selectType;
@property (nonatomic) NSArray supportFeature;
@property (nonatomic) NSArray cellModelList;
- (unsigned long long)selectType;
- (id)cellModelList;
- (void)setCellModelList:;
- (void)switchTabWithType:;
- (void)setSelectType:;
- (id)__constructCellModelList;
- (id)supportFeature;
- (id)titleStringDict;
- (void)setTitleStringDict:;
- (unsigned long long)selectTabCount;
- (void)setSelectTabCount:;
- (void)setSupportFeature:;
- (id)init;
- (void).cxx_destruct;
@end
