@interface IESSaaSTIMPBNGetUploadTokenResponseBody : GPBMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) BOOL hasAccessKey;
@property (nonatomic) NSMutableArray hostsArray;
@property (nonatomic) Q hostsArray_Count;
@property (nonatomic) NSString token;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) NSInteger tokenType;
@property (nonatomic) BOOL hasTokenType;
+ (id)descriptor;
@end
