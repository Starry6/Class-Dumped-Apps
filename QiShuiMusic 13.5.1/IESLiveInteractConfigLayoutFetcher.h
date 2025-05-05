@interface IESLiveInteractConfigLayoutFetcher : NSObject
@property (nonatomic) IESLiveInteractConfigLayoutEntranceModel entranceModel;
@property (nonatomic) NSMutableDictionary fileName2LyoutModel;
@property (nonatomic) BOOL preferLocalLayoutConfigFile;
@property (nonatomic) BOOL enableFetcherOpt;
- (void)setPreferLocalLayoutConfigFile:;
- (void)asyncLoadLayoutModelWithParams:completion:;
- (id)configFileNameParams:;
- (id)configWithFileName:;
- (BOOL)enableFetcherOpt;
- (id)entranceModel;
- (id)fileName2LyoutModel;
- (id)layoutModelWithParams:;
- (BOOL)preferLocalLayoutConfigFile;
- (void)setEnableFetcherOpt:;
- (void)setEntranceModel:;
- (void)setFileName2LyoutModel:;
- (id)syncLoadEntranceModel;
- (id)syncLoadLayoutModelWithParams:;
- (BOOL)useLayoutEngineForUILayout:;
- (void).cxx_destruct;
+ (id)shared;
@end
