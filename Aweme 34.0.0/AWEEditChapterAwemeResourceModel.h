@interface AWEEditChapterAwemeResourceModel : NSObject
@property (nonatomic) NSURL localURL;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) UIImage firstFrame;
@property (nonatomic) NSMutableArray errListM;
- (void)setCoverImage:;
- (id)errList;
- (void)logErr:;
- (id)errListM;
- (void)setErrListM:;
- (void).cxx_destruct;
- (id)localURL;
- (void)setLocalURL:;
- (id)firstFrame;
- (void)setFirstFrame:;
- (id)coverImage;
@end
