@interface AMSAccountDeviceInfoResult : NSObject
@property (nonatomic) NSDictionary rawResult;
@property (nonatomic) ACAccount account;
@property (nonatomic) NSNumber isBundleOwner;
- (id)account;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccount:responseDictionary:;
- (id)isBundleOwner;
- (id)rawResult;
@end
