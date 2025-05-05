@interface CPLPlaceholderRecord : NSObject
@property (nonatomic) # recordClass;
@property (nonatomic) CPLScopedIdentifier scopedIdentifier;
@property (nonatomic) # relatedRecordClass;
@property (nonatomic) NSString relatedIdentifier;
@property (nonatomic) CPLScopedIdentifier relatedScopedIdentifier;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithRecord:;
- (id)description;
- (id)scopedIdentifier;
- (Class)recordClass;
- (id)relatedScopedIdentifier;
- (id)translateToCloudRecordUsingIDMapping:;
- (id)translateToClientRecordUsingIDMapping:;
- (id)relatedIdentifier;
- (id)initWithRecordClass:scopedIdentifier:relatedRecordClass:relatedIdentifier:;
- (Class)relatedRecordClass;
@end
