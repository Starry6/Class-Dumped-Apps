@interface AWEProgressUIConfig : NSObject
@property (nonatomic) AWEProgressViewStatusUIConfig progressViewConfig;
@property (nonatomic) AWEProgressIndicatorStatusUIConfig indicatorConfig;
@property (nonatomic) AWEProgressPreviewViewStatusUIConfig thumbConfig;
@property (nonatomic) AWEProgressChapterViewStatusUIConfig chapterConfig;
- (id)chapterConfig;
- (id)progressViewConfig;
- (id)indicatorConfig;
- (id)thumbConfig;
- (void)setProgressViewConfig:;
- (void)setIndicatorConfig:;
- (void)setThumbConfig:;
- (void)setChapterConfig:;
- (void).cxx_destruct;
@end
