@interface BDUGDeviceUnionConfig : NSObject
@property (nonatomic) NSString validKey;
@property (nonatomic) NSArray invalidKeys;
@property (nonatomic) NSArray activityIdList;
@property (nonatomic) BOOL enableApplyToken;
@property (nonatomic) BOOL enableRefreshActId;
- (void)setInvalidKeys:;
- (id)activityIdList;
- (BOOL)enableApplyToken;
- (BOOL)enableRefreshActId;
- (id)initWithDic:;
- (id)invalidKeys;
- (void)setActivityIdList:;
- (void)setEnableApplyToken:;
- (void)setEnableRefreshActId:;
- (void).cxx_destruct;
- (id)validKey;
- (void)setValidKey:;
@end
