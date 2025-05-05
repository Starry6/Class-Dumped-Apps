@interface HTSLiveBannerView : IESLivePBBaseMessage
@property (nonatomic) NSString component;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) BOOL isKeepLast;
@property (nonatomic) q subBannerId;
@property (nonatomic) NSString earImage;
@property (nonatomic) HTSLiveTaskProps taskProps;
@property (nonatomic) BOOL hasTaskProps;
@property (nonatomic) HTSLiveImageProps imageProps;
@property (nonatomic) BOOL hasImageProps;
@property (nonatomic) HTSLiveBasicProps basicProps;
@property (nonatomic) BOOL hasBasicProps;
+ (id)descriptor;
@end
