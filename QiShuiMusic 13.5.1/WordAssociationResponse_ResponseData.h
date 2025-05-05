@interface WordAssociationResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary extraParams;
@property (nonatomic) NSMutableArray resultsArray;
@property (nonatomic) Q resultsArray_Count;
@property (nonatomic) q associationId;
@property (nonatomic) NSString associationIdStr;
- (void)setExtraParams:;
- (id)extraParams;
+ (id)descriptor;
@end
