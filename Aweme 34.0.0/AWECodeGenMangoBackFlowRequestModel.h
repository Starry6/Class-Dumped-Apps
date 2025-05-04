@interface AWECodeGenMangoBackFlowRequestModel : NSObject
@property (nonatomic) NSString shareSecUid;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString activityId;
@property (nonatomic) NSDictionary ext;
- (void)setExt:;
- (void)setShareSecUid:;
- (id)toParamsDict;
- (id)shareSecUid;
- (void)setActivityType:;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityId;
- (void)setActivityId:;
- (id)ext;
@end
