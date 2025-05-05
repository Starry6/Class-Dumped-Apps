@interface AssociationResult : IESLivePBBaseMessage
@property (nonatomic) NSInteger actionType;
@property (nonatomic) HTSLiveText associationDisplayText;
@property (nonatomic) BOOL hasAssociationDisplayText;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSMutableDictionary extraMap;
@property (nonatomic) Q extraMap_Count;
+ (id)descriptor;
@end
