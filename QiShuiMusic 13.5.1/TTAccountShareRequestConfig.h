@interface TTAccountShareRequestConfig : NSObject
@property (nonatomic) NSString passportShareOpenUniversalLink;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) q timeout;
- (void)setEnterMethod:;
- (id)enterFrom;
- (id)enterMethod;
- (id)passportShareOpenUniversalLink;
- (void)setEnterFrom:;
- (void)setPassportShareOpenUniversalLink:;
- (void)setTimeout:;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (long long)timeout;
+ (id)instanceWithBlock:;
@end
