@interface CreateInfoResponse_Activity : IESLivePBBaseMessage
@property (nonatomic) NSString areaURL;
@property (nonatomic) NSString areaSchemaURL;
@property (nonatomic) NSString bannerId;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString iconSchemaURL;
+ (id)descriptor;
@end
