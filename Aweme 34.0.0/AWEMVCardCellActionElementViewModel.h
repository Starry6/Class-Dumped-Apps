@interface AWEMVCardCellActionElementViewModel : AWEDCFeedBaseCellElementViewModel
@property (nonatomic) <AWEAwemePlayInteractionInteractorProtocol> interactor;
- (id)enterFrom;
- (void)refreshWithAwemeModel:;
- (void)didTapDiggButton:;
- (void)didTapUserInfo;
- (id)interactor;
- (void)setInteractor:;
- (void).cxx_destruct;
@end
