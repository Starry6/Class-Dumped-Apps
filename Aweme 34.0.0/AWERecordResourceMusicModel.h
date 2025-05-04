@interface AWERecordResourceMusicModel : NSObject
@property (nonatomic) NSString inMusicId;
@property (nonatomic) <ACCMusicModelProtocol> inMusicModel;
@property (nonatomic) <ACCMusicModelProtocol> outMusicModel;
@property (nonatomic) BOOL effectBindMusic;
@property (nonatomic) Q taskType;
@property (nonatomic) NSError outError;
@property (nonatomic) BOOL outSuccess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)outError;
- (BOOL)outSuccess;
- (id)outMusicModel;
- (BOOL)inputParameterIsValid;
- (void)setOutSuccess:;
- (void)setOutError:;
- (id)inMusicModel;
- (id)inMusicId;
- (void)setOutMusicModel:;
- (void)setEffectBindMusic:;
- (void)setInMusicId:;
- (void)setInMusicModel:;
- (BOOL)iSEffectBindMusic;
- (unsigned long long)taskType;
- (void).cxx_destruct;
@end
