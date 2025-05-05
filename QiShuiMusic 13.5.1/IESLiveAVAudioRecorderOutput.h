@interface IESLiveAVAudioRecorderOutput : NSObject
@property (nonatomic) BOOL saveAudioToFile;
@property (nonatomic) q audioType;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} audioFormat;
@property (nonatomic) NSString filePath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)saveAudioToFile;
- (void)clearAudioFile;
- (void)closeAudioFile;
- (BOOL)openAudioFile;
- (void)setSaveAudioToFile:;
- (id)filePath;
- (id)init;
- (id)audioFormat;
- (void)setFilePath:;
- (void)setAudioFormat:;
- (void)setup;
- (void).cxx_destruct;
- (long long)audioType;
- (void)setAudioType:;
@end
