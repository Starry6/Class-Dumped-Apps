@interface AWEFeedMultiDeviceVideoPlaySyncMessageModel : MTLModel
@property (nonatomic) NSDictionary pointDataDic;
@property (nonatomic) q messageType;
@property (nonatomic) q deviceID;
@property (nonatomic) q userID;
@property (nonatomic) NSString pointDataStr;
@property (nonatomic) q toDeviceType;
@property (nonatomic) AWEFeedMultiDeviceVideoPlaySyncContinueInfoModel continueInfoModel;
@property (nonatomic) NSString roomSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomSchema;
- (void)setRoomSchema:;
- (long long)toDeviceType;
- (id)continueInfoModel;
- (id)pointDataDic;
- (id)pointDataStr;
- (void)setPointDataStr:;
- (void)setPointDataDic:;
- (void)setToDeviceType:;
- (void)setContinueInfoModel:;
- (long long)userID;
- (void)setDeviceID:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (long long)deviceID;
- (long long)messageType;
- (void)setUserID:;
+ (id)continueInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
