@interface ICDelegationConsumerServiceSessionRequestResult : NSObject
@property (nonatomic) ICDelegateToken delegateToken;
@property (nonatomic) NSError resultError;
@property (nonatomic) NSString storefrontIdentifier;
- (id)delegateToken;
- (id)resultError;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (id)initWithDelegateToken:storefrontIdentifier:resultError:;
@end
