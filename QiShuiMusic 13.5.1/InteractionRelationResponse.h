@interface InteractionRelationResponse : IESLivePBBaseMessage
@property (nonatomic) InteractionRelationResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
