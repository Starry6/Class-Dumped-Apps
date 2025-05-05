@interface IESECLiveTaskDetailRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString bizID;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString taskType;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)buildParams;
- (id)extraParams;
- (void)setBizID:;
- (id)uniqueID;
- (id)taskType;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (void)setTaskType:;
- (id)bizID;
@end
