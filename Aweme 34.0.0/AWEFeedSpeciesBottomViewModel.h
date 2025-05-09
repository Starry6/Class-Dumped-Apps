@interface AWEFeedSpeciesBottomViewModel : NSObject
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) NSIndexPath currentIndexPath;
@property (nonatomic) BOOL isClickToEnter;
@property (nonatomic) NSString reactID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary params;
- (void)setEnterFrom:;
- (id)enterMethod;
- (id)enterFrom;
- (id)reactID;
- (void)setReactID:;
- (void)setIsClickToEnter:;
- (void)trackForShowAction;
- (void)trackForJumpAction;
- (void)trackForCloseAction;
- (id)getCommonTrackDic;
- (BOOL)isClickToEnter;
- (id)getShotBtnTitletext;
- (id)getTipContent;
- (BOOL)isInGrootScene;
- (void)jumpToRecordSpecies;
- (id)getSpeciesInfo;
- (id)getTipHintString;
- (id)defaultHintString;
- (id)getSchemaForClickRecord;
- (id)getCommonJumpParamsDic;
- (id)getShootJumpParamsDic;
- (id)getBrowseJumpParamsDic;
- (id)__enterMethod;
- (id)paramsForShowOrCloseOrBrowseActionTrack;
- (id)paramsForShootActionTrack;
- (id)getGrootOptimizeHomeSchema;
- (id)getTransformedEnterFrom:;
- (id)getGrootHomeSchema;
- (id)currentIndexPath;
- (void).cxx_destruct;
- (id)params;
- (void)setCurrentIndexPath:;
- (id)currentModel;
- (long long)getActionType;
- (void)setParams:;
- (void)setCurrentModel:;
@end
