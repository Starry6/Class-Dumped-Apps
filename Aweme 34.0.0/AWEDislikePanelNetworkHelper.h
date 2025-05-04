@interface AWEDislikePanelNetworkHelper : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) <AWEHttpTask> task;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (id)arrayToJsonString:;
- (id)modelToJsonDictionary:;
- (void)requestDimensionInfo:formerDimensions:completion:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
@end
