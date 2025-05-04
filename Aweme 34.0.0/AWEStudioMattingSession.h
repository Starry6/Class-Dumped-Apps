@interface AWEStudioMattingSession : NSObject
@property (nonatomic) NLEInterface_OC nleInterface;
- (id)nleInterface;
- (void)setNleInterface:;
- (void)cancelCurrentMattingExport;
- (id)prepareNLETrackSlot:;
- (id)prepareNLEModelWithNLETrackSlot:mattingModel:;
- (void)mattingFragmentWithModel:completion:;
- (void)dealloc;
- (void).cxx_destruct;
@end
