@interface AWEIMFansGroupManagementEntryViewModel : NSObject
@property (nonatomic) NSString entryTitle;
@property (nonatomic) NSString entryIconName;
@property (nonatomic) double extraPadding;
@property (nonatomic) AWEIMFansGroupManagementEntryModel fansGroupManagementEntryModel;
- (void)setExtraPadding:;
- (id)entryTitle;
- (id)entryIconName;
- (double)extraPadding;
- (void)setEntryTitle:;
- (void)setEntryIconName:;
- (void)setFansGroupManagementEntryModel:;
- (id)fansGroupManagementEntryModel;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
