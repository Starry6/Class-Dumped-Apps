@interface ICAddToWishListResponse : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSString message;
- (long long)statusCode;
- (id)initWithResponseDictionary:;
- (id)message;
- (void).cxx_destruct;
- (id)description;
@end
