@interface IMSaaSBTDShareModel : NSObject
@property (nonatomic) BOOL newShare;
@property (nonatomic) q contentType;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString shareImageURL;
@property (nonatomic) UIImage shareImage;
@property (nonatomic) NSString shareURL;
@property (nonatomic) NSString shareDescription;
@property (nonatomic) NSString textFormatForCopy;
@property (nonatomic) NSString shortLink;
@property (nonatomic) NSURL gifFileURL;
@property (nonatomic) NSData videoData;
@property (nonatomic) NSURL videoFileURL;
@property (nonatomic) NSURL videoAssetURL;
@property (nonatomic) NSURL videoALAssetURL;
@property (nonatomic) NSMutableDictionary userInfo;
- (id)videoALAssetURL;
- (id)gifFileURL;
- (BOOL)isNewShare;
- (void)setGifFileURL:;
- (void)setNewShare:;
- (void)setShareImage:;
- (void)setShareImageURL:;
- (void)setShortLink:;
- (void)setTextFormatForCopy:;
- (void)setVideoALAssetURL:;
- (void)setVideoData:;
- (id)shareImage;
- (id)shareImageURL;
- (id)shortLink;
- (id)textFormatForCopy;
- (id)videoData;
- (void)setContentType:;
- (id)shareURL;
- (id)content;
- (void)setContent:;
- (id)videoFileURL;
- (id)userInfo;
- (id)itemID;
- (long long)contentType;
- (void)setTitle:;
- (void)setItemID:;
- (id)title;
- (void).cxx_destruct;
- (void)setVideoFileURL:;
- (void)setShareURL:;
- (id)videoAssetURL;
- (void)setVideoAssetURL:;
- (id)shareDescription;
- (void)setShareDescription:;
@end
