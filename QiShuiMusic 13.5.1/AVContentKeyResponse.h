@interface AVContentKeyResponse : NSObject
- (void)dealloc;
- (id)initWithKeySystem:;
- (id)keySystem;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:renewalDate:;
+ (id)contentKeyResponseWithClearKeyData:initializationVector:;
+ (id)contentKeyResponseWithAuthorizationTokenData:;
@end
