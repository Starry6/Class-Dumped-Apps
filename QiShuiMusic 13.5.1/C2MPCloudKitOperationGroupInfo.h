@interface C2MPCloudKitOperationGroupInfo : PBCodable
@property (nonatomic) BOOL hasOperationGroupId;
@property (nonatomic) NSString operationGroupId;
@property (nonatomic) BOOL hasOperationGroupName;
@property (nonatomic) NSString operationGroupName;
@property (nonatomic) BOOL hasOperationGroupTriggered;
@property (nonatomic) BOOL operationGroupTriggered;
- (void)setOperationGroupName:;
- (id)operationGroupName;
- (BOOL)hasOperationGroupName;
- (id)operationGroupId;
- (BOOL)hasOperationGroupId;
- (void)writeTo:;
- (void)setHasOperationGroupTriggered:;
- (void)setOperationGroupId:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)operationGroupTriggered;
- (void)setOperationGroupTriggered:;
- (void).cxx_destruct;
- (BOOL)hasOperationGroupTriggered;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
