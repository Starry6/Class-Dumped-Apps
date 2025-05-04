@interface AWERVXiGuaGuideShowModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString coverURL;
@property (nonatomic) BOOL isForceGuide;
@property (nonatomic) @? xigGuideViewBlock;
- (BOOL)isForceGuide;
- (void)setIsForceGuide:;
- (id)xigGuideViewBlock;
- (void)setXigGuideViewBlock:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)coverURL;
- (void)setCoverURL:;
@end
