@interface PoiInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isPoiEnabled;
@property (nonatomic) q poiId;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiIdStr;
@property (nonatomic) NSString content;
@property (nonatomic) NSString city;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
+ (id)descriptor;
@end
