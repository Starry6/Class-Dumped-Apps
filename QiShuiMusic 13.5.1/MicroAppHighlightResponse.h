@interface MicroAppHighlightResponse : IESLivePBBaseMessage
@property (nonatomic) MicroAppHighlightResponse_Response data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
