@interface AWEPadProgressPauseAdapter : HTSService
@property (nonatomic) AWEPadProgressPauseConfigModel configModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configModel;
- (void)setConfigModel:;
- (id)generatePadPauseButtonWithButtonType:;
- (BOOL)enablePadProgressPauseControl;
- (void).cxx_destruct;
@end
