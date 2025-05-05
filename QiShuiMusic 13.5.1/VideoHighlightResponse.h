@interface VideoHighlightResponse : IESLivePBBaseMessage
@property (nonatomic) VideoHighlightResponse_Response data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
