@interface AWESelectTemplateDataExporter : NSObject
@property (nonatomic) LVExporterManager exporter;
@property (nonatomic) AWECutSameDataExporter cutSameExporter;
@property (nonatomic) BOOL cancelByUser;
- (void)dataExportCancel;
- (void)dataExportWithPublishModel:inputModel:needReplaceMusic:completion:;
- (void)quickSaveInOneClickFilmingPublishModel:inputModel:;
- (id)cutSameExporter;
- (void)dataExportForOneClickFilmingWithPublishModel:inputModel:needReplaceMusic:completion:;
- (void)setCancelByUser:;
- (void)p_addEditedTextsForAudit:inputModel:;
- (void)setCutSameExporter:;
- (BOOL)cancelByUser;
- (void).cxx_destruct;
- (id)exporter;
- (void)setExporter:;
@end
