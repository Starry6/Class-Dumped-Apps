@interface AWEPadTaskReportResponse : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) AWEPadTaskInfo taskInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)statusCode;
- (void).cxx_destruct;
- (id)taskInfo;
- (void)setStatusCode:;
- (void)setTaskInfo:;
+ (id)taskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
