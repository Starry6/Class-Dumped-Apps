@interface IESLiveSaaSPBOpenApiPoiInfo : GPBMessage
@property (nonatomic) BOOL isPoiEnabled;
@property (nonatomic) q poiId;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiIdStr;
@property (nonatomic) NSString content;
@property (nonatomic) NSString city;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
+ (id)descriptor;
@end
