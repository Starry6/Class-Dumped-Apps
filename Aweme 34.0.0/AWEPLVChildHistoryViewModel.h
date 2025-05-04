@interface AWEPLVChildHistoryViewModel : NSObject
@property (nonatomic) AWEPLVChildHistoryModel model;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) AWEPadBaseListSectionController sectionController;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) q dataType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionViewModel;
- (void)setSectionViewModel:;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (void)trackEvent:withExtraParams:;
- (void)historyClickReport;
- (void)transferToRelatedVideo:;
- (void)trackEvent:withExtraParams:historyModel:;
- (void)setModel:;
- (void)setDataType:;
- (void)setSectionController:;
- (id)initWithModel:;
- (id)sectionController;
- (id)model;
- (void).cxx_destruct;
- (long long)dataType;
- (void)didSelectItemAtIndex:;
@end
