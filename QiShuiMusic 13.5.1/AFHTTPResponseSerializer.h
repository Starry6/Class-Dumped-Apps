@interface AFHTTPResponseSerializer : NSObject
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSIndexSet acceptableStatusCodes;
@property (nonatomic) NSSet acceptableContentTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)acceptableContentTypes;
- (id)acceptableStatusCodes;
- (id)responseObjectForResponse:data:error:;
- (void)setAcceptableContentTypes:;
- (void)setAcceptableStatusCodes:;
- (BOOL)validateResponse:data:error:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
+ (BOOL)supportsSecureCoding;
+ (id)serializer;
@end
