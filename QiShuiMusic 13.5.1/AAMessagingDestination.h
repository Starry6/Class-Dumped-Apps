@interface AAMessagingDestination : NSObject
@property (nonatomic) q destinationType;
@property (nonatomic) NSString destination;
@property (nonatomic) NSString destinationURI;
- (id)initWithHandle:;
- (id)destinationURI;
- (id)destination;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)destinationType;
- (id)initWithPhoneNumber:;
- (id)initWithEmail:;
- (void)isRegisteredToiMessageWithCompletion:;
@end
