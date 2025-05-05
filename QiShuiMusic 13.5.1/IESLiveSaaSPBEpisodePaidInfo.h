@interface IESLiveSaaSPBEpisodePaidInfo : GPBMessage
@property (nonatomic) NSInteger paidType;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) q duration;
@property (nonatomic) IESLiveSaaSPBVideoInfo videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (nonatomic) q feedDuration;
@property (nonatomic) BOOL isDelivery;
+ (id)descriptor;
@end
