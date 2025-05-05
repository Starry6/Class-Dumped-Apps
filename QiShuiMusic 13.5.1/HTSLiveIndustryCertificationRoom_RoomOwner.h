@interface HTSLiveIndustryCertificationRoom_RoomOwner : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString leftColor;
@property (nonatomic) NSString rightColor;
@property (nonatomic) NSInteger anchorIndustryType;
@property (nonatomic) HTSLiveImage brandStoreTitle;
@property (nonatomic) BOOL hasBrandStoreTitle;
@property (nonatomic) HTSLiveImage brandStoreBackground;
@property (nonatomic) BOOL hasBrandStoreBackground;
@property (nonatomic) HTSLiveImage anchorRedsIcon;
@property (nonatomic) BOOL hasAnchorRedsIcon;
@property (nonatomic) HTSLiveImage anchorRedsSmallIcon;
@property (nonatomic) BOOL hasAnchorRedsSmallIcon;
+ (id)descriptor;
@end
