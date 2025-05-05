@interface HSResponse : NSObject
@property (nonatomic) NSString MIMEType;
@property (nonatomic) Q responseCode;
@property (nonatomic) NSDictionary responseHeaderFields;
@property (nonatomic) NSData responseData;
@property (nonatomic) NSURL responseDataFileURL;
@property (nonatomic) NSError error;
- (id)responseData;
- (unsigned long long)responseCode;
- (id)error;
- (void).cxx_destruct;
- (id)description;
- (id)MIMEType;
- (id)initWithCode:headerFields:data:MIMEType:error:;
- (id)responseHeaderFields;
- (id)responseDataFileURL;
- (void)setResponseDataFileURL:;
+ (id)responseWithCode:headerFields:data:MIMEType:error:;
+ (id)responseWithResponse:;
@end
