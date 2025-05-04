@interface AWEKaraokeDataHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)effectForEffectId:;
+ (id)fetchVideoFileInFolder:;
+ (id)generateAudioMVDataWithVideo:repository:draftFolder:videoData:completion:;
+ (id)generateAudioMVDataWithImages:repository:draftFolder:videoData:completion:;
+ (void)generateDefaultBGImage:completion:;
+ (id)effectIdForDataType:;
+ (id)fetchDSPFileInFolder:;
+ (id)coverImageForAsset:;
+ (void)fetchRelatedInfos:completion:;
+ (void)downloadEffectWithId:completion:;
+ (BOOL)karaokeLyricModelValid:;
+ (void)upzipMVTemplate:;
+ (id)generateTextParamsWithTitle:effectModel:color:size:fontPath:;
@end
