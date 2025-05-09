@interface AWEMiniLunaShareModel : NSObject
@property (nonatomic) Q shareType;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString name;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString authorId;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString clipId;
@property (nonatomic) NSString shortShareLink;
@property (nonatomic) NSString commonShareDesc;
@property (nonatomic) NSString feebBackSchema;
@property (nonatomic) NSString musicReportSchema;
@property (nonatomic) NSString videoReportSchema;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) @? channelClickBlock;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEOpenPlatformIMShareModel openPlatformIMShareModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (void)setClipId:;
- (id)shortShareLink;
- (void)setShortShareLink:;
- (id)commonShareDesc;
- (void)setCommonShareDesc:;
- (id)clipId;
- (id)feebBackSchema;
- (void)setFeebBackSchema:;
- (id)musicReportSchema;
- (void)setMusicReportSchema:;
- (id)videoReportSchema;
- (void)setVideoReportSchema:;
- (id)channelClickBlock;
- (void)setChannelClickBlock:;
- (id)openPlatformIMShareModel;
- (void)setOpenPlatformIMShareModel:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)authorName;
- (void)setAuthorName:;
- (void)setShareType:;
- (unsigned long long)shareType;
- (id)itemId;
- (id)extraInfo;
- (void)setExtraInfo:;
- (id)coverURL;
- (void)setCoverURL:;
- (id)authorId;
- (void)setAuthorId:;
- (void)setItemId:;
@end
