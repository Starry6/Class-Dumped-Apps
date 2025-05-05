@interface TRIFactor : TRIPBMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) BOOL hasId_p;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger namespaceId;
@property (nonatomic) BOOL hasNamespaceId;
@property (nonatomic) NSString namespaceName;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) NSMutableArray metadataKeysArray;
@property (nonatomic) Q metadataKeysArray_Count;
@property (nonatomic) NSString alias;
@property (nonatomic) BOOL hasAlias;
- (id)typeString;
- (BOOL)hasNamespace;
- (id)namespaceString;
- (BOOL)isInNamespaceName:;
+ (id)descriptor;
@end
