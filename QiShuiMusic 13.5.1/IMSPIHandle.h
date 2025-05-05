@interface IMSPIHandle : NSObject
@property (nonatomic) NSString address;
@property (nonatomic) BOOL isMe;
@property (nonatomic) NSString countryCode;
@property (nonatomic) BOOL isBusiness;
@property (nonatomic) NSString businessName;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString cnContactID;
- (void)setCountryCode:;
- (id)countryCode;
- (BOOL)isMe;
- (void)setIsMe:;
- (id)handle;
- (void)setAddress:;
- (unsigned long long)hash;
- (id)displayName;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (BOOL)isEqual:;
- (id)businessName;
- (BOOL)isBusiness;
- (id)initWithAddress:countryCode:isMe:;
- (id)cnContactID;
@end
