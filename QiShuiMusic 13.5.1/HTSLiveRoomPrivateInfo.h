@interface HTSLiveRoomPrivateInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isSandbox;
@property (nonatomic) HTSLiveRegionRestriction enterRegionRestriction;
@property (nonatomic) BOOL hasEnterRegionRestriction;
@property (nonatomic) NSString locale;
@property (nonatomic) HTSLiveRegion gpsRegion;
@property (nonatomic) BOOL hasGpsRegion;
@property (nonatomic) HTSLiveRegion region;
@property (nonatomic) BOOL hasRegion;
@property (nonatomic) NSString tagSet;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) NSString citycode;
@property (nonatomic) NSString laneEnv;
@property (nonatomic) HTSLiveRegionMatch enterRegionMatch;
@property (nonatomic) BOOL hasEnterRegionMatch;
@property (nonatomic) GPBInt64Array selfVisibleAntidirtTablesArray;
@property (nonatomic) Q selfVisibleAntidirtTablesArray_Count;
@property (nonatomic) GPBInt64Array banAntidirtTablesArray;
@property (nonatomic) Q banAntidirtTablesArray_Count;
@property (nonatomic) q webcastCommentTcs;
+ (id)descriptor;
@end
