@interface AWEDetailPageManager : NSObject
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) NSMutableDictionary shootSameOperationsMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)readShootSameOperationWithIdentify:;
- (void)deleteShootSameOperationWithIdentify:;
- (void)trackShootSameResultWith:requestModel:error:duration:;
- (void)writeShootSameOperation:identify:;
- (id)shootSameOperationsMap;
- (id)commonExtraInfoForRequestingShootSameSchema:;
- (id)startRequestShootSameSchemaWithRequestModel:priority:completion:;
- (id)startRequestShootSameSchemaForMusicDetailWithAwemeModel:activityMobDic:extraInfo:priority:completion:;
- (id)startRequestShootSameSchemaForTrendDetailWithAwemeModel:activityMobDic:extraInfo:priority:completion:;
- (void)cancelShootSameSchemaOperationWithIdentify:;
- (void)setShootSameOperationsMap:;
- (id)operationQueue;
- (void)setOperationQueue:;
- (id)init;
- (void).cxx_destruct;
+ (id)detailPageTypeInStringFormatWith:;
+ (id)sharedInstance;
@end
