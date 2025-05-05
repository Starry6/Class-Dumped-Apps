@interface CPLClientCacheRecordView : CPLRecordView
@property (nonatomic) CPLScopedIdentifier localScopedIdentifier;
@property (nonatomic) CPLRecordChange cloudRecord;
@property (nonatomic) <CPLEngineIDMapping> idMapping;
- (id)idMapping;
- (id)redactedDescription;
- (id)relation;
- (void).cxx_destruct;
- (id)description;
- (id)scopedIdentifier;
- (id)synthesizedRecord;
- (Class)recordClass;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)cloudRecord;
- (id)recordChangeData;
- (id)sharingRecordChangeData;
- (id)initWithLocalScopedIdentifier:cloudRecord:idMapping:;
- (id)localScopedIdentifier;
@end
