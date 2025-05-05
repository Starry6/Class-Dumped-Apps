@interface AWEIMMsgBoxAutoManagementVCViewModel : NSObject
@property (nonatomic) NSArray selectedDatas;
@property (nonatomic) <AWEIMMsgboxAutoManagementCellViewModelProtocol> firstModel;
@property (nonatomic) q toastType;
@property (nonatomic) NSArray allDatas;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allDatas;
- (id)allSelectedDatas;
- (void)batchUpdateMsgboxState;
- (void)batchUpdateWithCompletion:;
- (void)didClickCancelWithSelectedDatas:allDatas:completion:;
- (void)didClickConfimWithSelectedDatas:allDatas:completion:;
- (id)firstModel;
- (id)selectedDatas;
- (void)setAllDatas:;
- (void)setFirstModel:;
- (void)setSelectedDatas:;
- (void)setToastType:;
- (long long)toastType;
- (void).cxx_destruct;
@end
