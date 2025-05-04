@interface AWEGeneralPopupDescriptor : NSObject
@property (nonatomic) AWEGeneralPopupModel model;
@property (nonatomic) AWEGeneralPopupRecord record;
@property (nonatomic) AWEGeneralPopupPresenter presenter;
- (BOOL)showPopupIfCanAtTiming:onClose:;
- (void)setModel:;
- (void)setRecord:;
- (id)presenter;
- (void)setPresenter:;
- (id)model;
- (id)record;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@end
