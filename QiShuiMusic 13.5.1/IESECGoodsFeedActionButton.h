@interface IESECGoodsFeedActionButton : IESECButton
@property (nonatomic) BOOL useNewUI;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleActivityUpdateNotification:;
- (void)registerMessages;
- (void)reservateDepositSuccess;
- (void)setUseNewUI:;
- (void)unregisterMessages;
- (void)updateBaseUIWithActionModel:;
- (void)updateColorWithType:;
- (void)updateNewColorWithType:;
- (id)updateTextWithModel:;
- (void)updateUIWithModel:;
- (void)updateWithActionModel:;
- (void)updateWithParameters:;
- (BOOL)useNewUI;
- (void)handleTapGesture:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
