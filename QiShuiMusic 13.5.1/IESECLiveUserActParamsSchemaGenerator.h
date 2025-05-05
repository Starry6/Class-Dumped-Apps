@interface IESECLiveUserActParamsSchemaGenerator : NSObject
@property (nonatomic) <IESECLiveUserRecordActionInterface> actRecordManager;
@property (nonatomic) IESECHybridParamsVerifyHelper combineParamsHelper;
@property (nonatomic) NSString schema;
@property (nonatomic) IESECLiveContext liveContext;
- (void)setLiveContext:;
- (id)actRecordManager;
- (void)appendDefaultParamsToSchema:;
- (void)appendUserActParamsToSchema:roomContext:actRecordManager:carryParamsType:userActParams:appendDefaultParams:;
- (id)clickProductIDArray;
- (id)clickTabProductIDArray;
- (id)combineParamsHelper;
- (id)curExplainProductID;
- (id)curGuideProductID;
- (id)currentTimeStr;
- (id)jumpHandler;
- (id)liveContext;
- (void)setActRecordManager:;
- (void)setCombineParamsHelper:;
- (id)showProductIDArray;
- (id)schema;
- (id)tracker;
- (void)setSchema:;
- (void).cxx_destruct;
@end
