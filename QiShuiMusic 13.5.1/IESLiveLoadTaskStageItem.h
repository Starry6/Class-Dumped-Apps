@interface IESLiveLoadTaskStageItem : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) Q state;
- (void)updateStage:state:;
- (void)updateStageWithLevel:state:;
- (unsigned long long)stage;
- (id)init;
- (void)setState:;
- (void)setStage:;
- (unsigned long long)state;
@end
