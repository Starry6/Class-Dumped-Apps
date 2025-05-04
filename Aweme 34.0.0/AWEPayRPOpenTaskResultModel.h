@interface AWEPayRPOpenTaskResultModel : NSObject
@property (nonatomic) q openModeType;
@property (nonatomic) NSData recordData;
@property (nonatomic) <IESIMAudioMessageRecorderInterface> recorder;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString taskMessageID;
- (void)setTaskMessageID:;
- (id)getOpenRequestExtParams;
- (id)taskMessageID;
- (long long)openModeType;
- (void)setOpenModeType:;
- (id)filePath;
- (void)setRecordData:;
- (void)setFilePath:;
- (id)recordData;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
@end
