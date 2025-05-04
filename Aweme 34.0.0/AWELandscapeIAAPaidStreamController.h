@interface AWELandscapeIAAPaidStreamController : AWELandscapeInteractionBaseController
@property (nonatomic) <AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)didEnterLandscape;
- (void)willExitLandscape;
- (BOOL)usePaidStream:;
- (void)preparePaidStream;
- (id)paidStreamControl;
- (void)setPaidStreamControl:;
- (BOOL)usePaidStreamPreventScreenRecord;
- (void)dealloc;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
