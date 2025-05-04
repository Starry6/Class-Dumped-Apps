@interface AWEProgressChapterViewStatusUIConfig : NSObject
@property (nonatomic) AWEProgressChapterUIConfig chapterNormalConfig;
@property (nonatomic) AWEProgressChapterUIConfig chapterActiveConfig;
@property (nonatomic) AWEProgressChapterUIConfig chapterDraggingConfig;
@property (nonatomic) AWEProgressChapterUIConfig chapterStableConfig;
- (id)chapterNormalConfig;
- (void)setChapterNormalConfig:;
- (id)chapterActiveConfig;
- (void)setChapterActiveConfig:;
- (id)chapterDraggingConfig;
- (void)setChapterDraggingConfig:;
- (id)chapterStableConfig;
- (void)setChapterStableConfig:;
- (void).cxx_destruct;
@end
