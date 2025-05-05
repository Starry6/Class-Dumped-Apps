@interface HTSLiveUser_PoiInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isPoiEnabled;
@property (nonatomic) q poiId;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiIdStr;
@property (nonatomic) q followerCountPermission;
@property (nonatomic) q whiteUserPermission;
+ (id)descriptor;
@end
