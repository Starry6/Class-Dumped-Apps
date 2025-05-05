@interface CJPayPerformanceStage : NSObject
@property (nonatomic) NSString stageTypeStr;
@property (nonatomic) NSString name;
@property (nonatomic) Q stageType;
@property (nonatomic) double curTime;
@property (nonatomic) NSString sdkProcessID;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSDictionary extra;
- (double)curTime;
- (id)sdkProcessID;
- (void)setCurTime:;
- (void)setExtra:;
- (void)setSdkProcessID:;
- (void)setStageType:;
- (void)setStageTypeStr:;
- (unsigned long long)stageType;
- (id)stageTypeStr;
- (id)extra;
- (void)setName:;
- (unsigned long long)hash;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (void)setPageName:;
- (id)pageName;
+ (id)stageTypeStrByENUM:;
@end
