@interface FansclubMeResult_Banner : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) NSString rightContent;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) q carouselDuration;
@property (nonatomic) q type;
@property (nonatomic) NSString leftContent;
@property (nonatomic) NSString bannerName;
@property (nonatomic) q displayPosition;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
