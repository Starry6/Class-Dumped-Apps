@interface AMSCarrierLinkResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString channelCustomerId;
@property (nonatomic) AMSCarrierLinkParams linkParams;
@property (nonatomic) NSString productCode;
- (id)statusCode;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)response;
- (void).cxx_destruct;
- (id)initWithResponse:linkParams:;
- (id)channelCustomerId;
- (id)linkParams;
- (id)productCode;
+ (BOOL)supportsSecureCoding;
@end
