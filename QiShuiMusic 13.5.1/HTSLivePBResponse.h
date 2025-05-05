@interface HTSLivePBResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLivePBResponse_Header header;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) NSData body;
+ (id)descriptor;
@end
