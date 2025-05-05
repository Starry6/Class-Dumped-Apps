@interface C2NetworkingResponse : NSObject
@property (nonatomic) NSHTTPURLResponse urlResponse;
@property (nonatomic) NSData body;
- (id)body;
- (void).cxx_destruct;
- (id)urlResponse;
+ (id)responseWithURLResponse:body:;
+ (id)responseFromRequest:statusCode:headerFields:body:;
@end
