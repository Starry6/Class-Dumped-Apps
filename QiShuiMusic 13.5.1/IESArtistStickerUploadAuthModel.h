@interface IESArtistStickerUploadAuthModel : MTLModel
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString expiredTime;
@property (nonatomic) NSString currentTime;
@property (nonatomic) NSString spaceName;
@property (nonatomic) NSString uploadDomain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expiredTime;
- (id)uploadDomain;
- (void).cxx_destruct;
- (id)currentTime;
- (id)sessionToken;
- (id)secretKey;
- (id)accessKey;
- (id)spaceName;
+ (id)JSONKeyPathsByPropertyKey;
@end
