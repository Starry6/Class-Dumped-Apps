@interface IESLivePlayerEffectModelManager : NSObject
@property (nonatomic) NSMutableDictionary modelDict;
@property (nonatomic) <IESLivePlayerControllerDelegate> delegate;
- (void)addEffectModel:effectName:;
- (id)getEffectPath:;
- (id)modelDict;
- (void)setModelDict:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
