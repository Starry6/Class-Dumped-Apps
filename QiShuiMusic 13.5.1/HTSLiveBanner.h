@interface HTSLiveBanner : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString title;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) q actionType;
@property (nonatomic) q bannerType;
@property (nonatomic) q priority;
@property (nonatomic) NSString text;
@property (nonatomic) q frameType;
@property (nonatomic) NSString extra;
@property (nonatomic) q status;
@property (nonatomic) NSString openId;
@property (nonatomic) q roomid;
@property (nonatomic) q appointmentStartTimestamp;
@property (nonatomic) q appointmentEndTimestamp;
@property (nonatomic) q appointmentId;
- (id)mapToBannerModel;
+ (id)descriptor;
@end
