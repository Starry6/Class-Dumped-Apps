@interface ImCommonHighlightResponse : IESLivePBBaseMessage
@property (nonatomic) ImCommonHighlightResponse_Response data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
