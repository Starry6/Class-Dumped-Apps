@interface AVAirMessageResponse : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localizedDescription;
- (id)bodyData;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (id)messageDataRepresentation;
- (id)initWithStatus:localizedDescription:;
- (id)headersForContentLength:compression:;
+ (id)messageWithParts:;
+ (id)messageWithVersion:headers:bodyData:;
+ (id)responseWithParts:;
@end
