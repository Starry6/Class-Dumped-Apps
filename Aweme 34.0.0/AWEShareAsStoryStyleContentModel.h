@interface AWEShareAsStoryStyleContentModel : NSObject
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString titleInfo;
@property (nonatomic) double originalWidth;
@property (nonatomic) double originalHeight;
@property (nonatomic) Q type;
@property (nonatomic) NSArray url;
@property (nonatomic) AWEShareAsStoryStyleFrameModel frame;
- (id)titleInfo;
- (void)setTitleInfo:;
- (double)originalHeight;
- (void)setUrl:;
- (id)frame;
- (double)originalWidth;
- (void)setFrame:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)url;
- (id)authorName;
- (void)setAuthorName:;
- (void)setOriginalHeight:;
- (void)setOriginalWidth:;
@end
