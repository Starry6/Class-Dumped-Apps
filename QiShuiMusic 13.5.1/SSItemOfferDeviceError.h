@interface SSItemOfferDeviceError : NSObject
@property (nonatomic) NSString localizedMessage;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedURLTitle;
@property (nonatomic) NSURL URL;
- (void)dealloc;
- (id)localizedTitle;
- (id)URL;
- (id)localizedMessage;
- (id)_initWithMessage:title:URLTitle:URL:;
- (id)localizedURLTitle;
@end
