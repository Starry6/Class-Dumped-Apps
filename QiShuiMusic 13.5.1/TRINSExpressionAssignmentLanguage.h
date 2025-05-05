@interface TRINSExpressionAssignmentLanguage : TRIPBMessage
@property (nonatomic) NSString assignmentExpression;
@property (nonatomic) BOOL hasAssignmentExpression;
@property (nonatomic) I schemaVersion;
@property (nonatomic) BOOL hasSchemaVersion;
+ (id)descriptor;
@end
