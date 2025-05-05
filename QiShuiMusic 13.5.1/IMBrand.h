@interface IMBrand : NSObject
@property (nonatomic) BSBrand brand;
@property (nonatomic) NSString brandURI;
@property (nonatomic) NSString name;
@property (nonatomic) NSString primaryPhoneNumber;
@property (nonatomic) BOOL verified;
@property (nonatomic) NSString localizedResponseTime;
- (void)dealloc;
- (id)_init;
- (id)name;
- (BOOL)isVerified;
- (id)brand;
- (id)localizedResponseTime;
- (id)primaryPhoneNumber;
- (void)_setBrand:;
- (id)brandURI;
- (void)squareLogoDataForDesiredSize:completion:;
- (void)wideLogoDataForDesiredSize:completion:;
+ (id)placeholderName;
+ (id)brandWithBSBrand:;
@end
