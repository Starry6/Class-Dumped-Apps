@interface AWEFakeVideoCommentParamsModel : NSObject
@property (nonatomic) NSString publishTitle;
@property (nonatomic) NSArray titleExtraInfo;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) BOOL isImage;
- (void)setCoverImage:;
- (void)setPublishTitle:;
- (id)titleExtraInfo;
- (id)publishTitle;
- (void)setIsImage:;
- (void)setTitleExtraInfo:;
- (void).cxx_destruct;
- (BOOL)isImage;
- (id)coverImage;
@end
