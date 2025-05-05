@interface RelationResponse : IESLivePBBaseMessage
@property (nonatomic) RelationData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) RelationExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
