@interface NEFilterBrowserFlow : NEFilterFlow
@property (nonatomic) NSURLRequest request;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) NSURL parentURL;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (id)response;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setResponse:;
- (id)copyWithZone:;
- (BOOL)createNewFlowReply:controlSocket:verdict:context:;
- (BOOL)createDataReply:controlSocket:direction:verdict:context:;
- (BOOL)createDataCompleteReply:controlSocket:direction:verdict:context:;
- (id)parentURL;
- (void)setParentURL:;
+ (BOOL)supportsSecureCoding;
@end
