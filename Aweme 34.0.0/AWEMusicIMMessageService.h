@interface AWEMusicIMMessageService : NSObject
@property (nonatomic) NSMutableDictionary dspToMiniDic;
@property (nonatomic) NSMutableDictionary miniToDspDic;
- (id)musicIdClipMappingWithOriginalId:;
- (void)batchGetMusicLiteInfosWithIdInfos:completed:;
- (id)dspToMiniDic;
- (id)miniToDspDic;
- (void)setDspToMiniDic:;
- (void)setMiniToDspDic:;
- (void).cxx_destruct;
+ (id)shared;
@end
