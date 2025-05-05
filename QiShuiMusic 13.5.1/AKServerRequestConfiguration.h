@interface AKServerRequestConfiguration : NSObject
@property (nonatomic) NSURLRequest request;
@property (nonatomic) AKAppleIDServerResourceLoadDelegate resourceLoadDelegate;
@property (nonatomic) Q requestType;
@property (nonatomic) Q presentationType;
@property (nonatomic) NSArray whitelistedPathURLs;
- (unsigned long long)requestType;
- (void)setRequestType:;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPresentationType:;
- (id)description;
- (unsigned long long)presentationType;
- (void)setRequest:;
- (void)setResourceLoadDelegate:;
- (id)initWithRequest:requestType:;
- (id)resourceLoadDelegate;
- (id)whitelistedPathURLs;
- (void)setWhitelistedPathURLs:;
+ (BOOL)supportsSecureCoding;
@end
