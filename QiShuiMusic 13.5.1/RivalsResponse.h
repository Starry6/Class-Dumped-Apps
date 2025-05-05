@interface RivalsResponse : IESLivePBBaseMessage
@property (nonatomic) RivalsResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) RivalsResponse_RivalsExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
