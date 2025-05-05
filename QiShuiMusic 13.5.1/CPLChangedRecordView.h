@interface CPLChangedRecordView : CPLRecordView
@property (nonatomic) CPLRecordView baseRecordView;
@property (nonatomic) CPLRecordChange change;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)change;
- (id)description;
- (id)scopedIdentifier;
- (id)synthesizedRecord;
- (Class)recordClass;
- (id)initWithChange:overRecordView:;
- (id)placeholderRecord;
- (id)changeForType:;
- (id)recordChangeData;
- (id)sharingRecordChangeData;
- (id)baseRecordView;
@end
