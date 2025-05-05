@interface CPLRecordView : NSObject
@property (nonatomic) CPLScopedIdentifier scopedIdentifier;
@property (nonatomic) CPLRecordChange synthesizedRecord;
@property (nonatomic) CPLPlaceholderRecord placeholderRecord;
@property (nonatomic) NSData recordChangeData;
@property (nonatomic) NSData sharingRecordChangeData;
- (id)redactedDescription;
- (id)relation;
- (BOOL)supportsResources;
- (id)description;
- (id)scopedIdentifier;
- (id)synthesizedRecord;
- (Class)recordClass;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)placeholderRecord;
- (id)changeForType:;
- (id)recordChangeData;
- (id)sharingRecordChangeData;
- (id)realRecordChangeFromRecordChange:direction:newRecord:changeType:diffTracker:;
- (id)realRecordChangeFromRecordChange:direction:newRecord:diffTracker:;
- (id)realRecordChangeFromRecordChange:direction:newRecord:;
@end
