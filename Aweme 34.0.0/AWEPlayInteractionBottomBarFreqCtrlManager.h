@interface AWEPlayInteractionBottomBarFreqCtrlManager : NSObject
@property (nonatomic) NSMutableSet showRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showRecord;
- (BOOL)isFreqCtrlSatisfiedForBar:awemeModel:context:;
- (void)addBarShowRecordForModel:context:;
- (void)updateBottomBarToBeAvoidForModel:identifier:context:;
- (void)setShowRecord:;
- (void).cxx_destruct;
+ (BOOL)enableFreqCtrl;
+ (BOOL)enableFreqCtrlForScene:context:;
+ (id)bottomBarWhiteList;
+ (long long)freqCtrlModelCount;
+ (long long)freqCtrlBarShowMaxCount;
+ (id)feedBottomBarFreqCtrlStrategy2Config;
+ (id)scenesToCtrl;
+ (id)freqCtrlConfig;
+ (id)bottomBarToBeAvoidForModel:;
@end
