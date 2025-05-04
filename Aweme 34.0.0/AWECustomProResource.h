@interface AWECustomProResource : NSObject
@property (nonatomic) NSString exportTaskId;
@property (nonatomic) ACCDraftURS packageURS;
@property (nonatomic) ACCDraftURS iconURS;
- (void)setPackageURS:;
- (void)setIconURS:;
- (id)packageURS;
- (id)iconURS;
- (id)exportTaskId;
- (void)setExportTaskId:;
- (void).cxx_destruct;
@end
