@interface TTVideoEngineFragmentLoader : NSObject
@property (nonatomic) NSMutableArray<TTVideoEngineFragment> fragments;
- (void)loadFragmentWithList:engine:;
- (void)unLoadFragment;
- (void)videoEngineDidCallPlay:;
- (void)videoEngineDidInit:;
- (void)videoEngineDidPrepared:;
- (void)videoEngineDidReset:;
- (void).cxx_destruct;
- (id)fragments;
- (void)setFragments:;
@end
