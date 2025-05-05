@interface IESLiveSubtitleSEIResult : NSObject
@property (nonatomic) NSArray subtitles;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) IESLiveInteractionCropData cropData;
@property (nonatomic) NSDictionary metaSEI;
@property (nonatomic) Q seiType;
@property (nonatomic) Q seiMode;
@property (nonatomic) BOOL immidiately;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)metaSEI;
- (unsigned long long)seiMode;
- (unsigned long long)seiType;
- (void)setImmidiately:;
- (id)cropData;
- (BOOL)immidiately;
- (void)setCropData:;
- (void)setMetaSEI:;
- (void)setSeiMode:;
- (void)setSeiType:;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)subtitles;
- (void)setSubtitles:;
- (void)setAppData:;
- (id)appData;
@end
