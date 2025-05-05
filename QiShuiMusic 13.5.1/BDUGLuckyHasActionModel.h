@interface BDUGLuckyHasActionModel : BDUGLuckyJSONModel
@property (nonatomic) BOOL hasAction;
@property (nonatomic) NSArray<BDUGLuckyActionTypeModel> hasActionByType;
@property (nonatomic) NSArray<BDUGLuckyActionRecordModel> actionRecords;
- (id)hasActionByType;
- (id)actionRecords;
- (void)setActionRecords:;
- (void)setHasActionByType:;
- (void).cxx_destruct;
- (BOOL)hasAction;
- (void)setHasAction:;
@end
