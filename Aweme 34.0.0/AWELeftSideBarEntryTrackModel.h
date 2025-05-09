@interface AWELeftSideBarEntryTrackModel : NSObject
@property (nonatomic) NSString identification;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString entranceStatus;
@property (nonatomic) NSString homepageHotScene;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString bizId;
@property (nonatomic) NSString schemaId;
@property (nonatomic) q lastLottieTime;
@property (nonatomic) q lastAnimateTime;
@property (nonatomic) q lastBadgeTime;
@property (nonatomic) NSString entryBadgeComponentID;
@property (nonatomic) NSDictionary bizTrackParams;
- (id)referString;
- (void)setEnterMethod:;
- (void)setReferString:;
- (id)enterMethod;
- (void)setIdentification:;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (id)entranceStatus;
- (void)setEntranceStatus:;
- (id)homepageHotScene;
- (void)setHomepageHotScene:;
- (id)schemaId;
- (void)setSchemaId:;
- (long long)lastLottieTime;
- (void)setLastLottieTime:;
- (long long)lastAnimateTime;
- (void)setLastAnimateTime:;
- (void)setLastBadgeTime:;
- (long long)lastBadgeTime;
- (id)entryBadgeComponentID;
- (void)setEntryBadgeComponentID:;
- (void)setGroupId:;
- (id)groupId;
- (void).cxx_destruct;
- (id)bizId;
- (void)setBizId:;
- (id)identification;
@end
