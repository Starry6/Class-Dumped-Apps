@interface AWELiteBaseApiModel : MTLModel
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorTips;
@property (nonatomic) NSString logID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorTips;
- (void)setErrorTips:;
- (void)mergeAllPropertyKeysWithLogID:;
- (void)mergeAllPropertyKeysWithBusinessCode:businessTips:;
- (void)setErrorCode:;
- (long long)errorCode;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
+ (void)setPreventMergePropertyInfiniteLoop:;
+ (BOOL)preventMergePropertyInfiniteLoop;
@end
