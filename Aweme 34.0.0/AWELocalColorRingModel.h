@interface AWELocalColorRingModel : AWELocalUserCenterBaseModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) NSArray ringItems;
@property (nonatomic) AWELocalMomentNotesInfo notesInfo;
- (id)notesInfo;
- (void)setNotesInfo:;
- (id)ringItems;
- (void)setRingItems:;
- (id)userPropertyDetail;
- (void).cxx_destruct;
- (id)targetTable;
- (id)copyWithZone:;
+ (id)modifyTime;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)notesInfo;
+ (id)ringItems;
+ (id)ringItemsJSONTransformer;
+ (id)notesInfoJSONTransformer;
+ (id)userID;
+ (id)updateTime;
+ (id)isDeleted;
+ (id)JSONKeyPathsByPropertyKey;
@end
