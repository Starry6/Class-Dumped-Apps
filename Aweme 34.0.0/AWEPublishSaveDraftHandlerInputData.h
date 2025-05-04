@interface AWEPublishSaveDraftHandlerInputData : NSObject
@property (nonatomic) AWEVideoPublishViewModel model;
@property (nonatomic) Q flowType;
@property (nonatomic) q type;
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
- (void)setModel:;
- (void)setError:;
- (void)setSuccess:;
- (long long)type;
- (id)model;
- (void)setType:;
- (void).cxx_destruct;
- (id)error;
- (BOOL)success;
- (unsigned long long)flowType;
- (void)setFlowType:;
@end
