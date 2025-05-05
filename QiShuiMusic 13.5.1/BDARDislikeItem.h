@interface BDARDislikeItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString inputText;
@property (nonatomic) BDARDislikeModel originModel;
@property (nonatomic) NSArray subtitles;
@property (nonatomic) q height;
@property (nonatomic) NSMutableArray frames;
@property (nonatomic) Q type;
@property (nonatomic) BOOL enableNewReport;
- (void)setOriginModel:;
- (BOOL)enableNewReport;
- (id)originModel;
- (void)setEnableNewReport:;
- (void)setType:;
- (void)setTitle:;
- (long long)height;
- (unsigned long long)type;
- (id)title;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)frames;
- (void)setInputText:;
- (id)inputText;
- (id)subtitles;
- (void)setSubtitles:;
- (void)setFrames:;
@end
