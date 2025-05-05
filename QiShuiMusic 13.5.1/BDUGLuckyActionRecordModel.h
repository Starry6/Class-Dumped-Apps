@interface BDUGLuckyActionRecordModel : BDUGLuckyJSONModel
@property (nonatomic) q crossoverActionType;
@property (nonatomic) NSArray<BDUGLuckyActionRecordItemModel> actionRecords;
- (id)actionRecords;
- (long long)crossoverActionType;
- (void)setActionRecords:;
- (void)setCrossoverActionType:;
- (void).cxx_destruct;
@end
