@interface AWEStudioAwemeResourceModel : NSObject
@property (nonatomic) NSURL localURL;
@property (nonatomic) NSArray images;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSDictionary assets;
@property (nonatomic) UIImage firstFrame;
@property (nonatomic) NSMutableArray errListM;
- (void)setCoverImage:;
- (id)errList;
- (void)logErr:;
- (id)errListM;
- (void)setErrListM:;
- (id)images;
- (id)assets;
- (void)setImages:;
- (void)setAssets:;
- (void).cxx_destruct;
- (id)localURL;
- (void)setLocalURL:;
- (id)firstFrame;
- (void)setFirstFrame:;
- (id)coverImage;
@end
