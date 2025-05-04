@interface AWEInTodayPlayerScreenObserver : NSObject
@property (nonatomic) NSDictionary defaultParams;
@property (nonatomic) AWEInTodayPlayerGridHandler gridHandler;
@property (nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> dataController;
- (void)setDataController:;
- (id)defaultParams;
- (void)setDefaultParams:;
- (void)screenCapturedDidChange:;
- (void)observeScreenShot;
- (void)observeScreenRecord;
- (void)userDidTakeScreenShot:;
- (id)gridHandler;
- (void)setGridHandler:;
- (void)dealloc;
- (void)run;
- (void).cxx_destruct;
- (id)dataController;
@end
