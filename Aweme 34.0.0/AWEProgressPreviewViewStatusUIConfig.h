@interface AWEProgressPreviewViewStatusUIConfig : NSObject
@property (nonatomic) NSArray bigThumbs;
@property (nonatomic) AWEProgressThumbUIConfig thumbNormalConfig;
@property (nonatomic) AWEProgressThumbUIConfig thumbActiveConfig;
@property (nonatomic) AWEProgressThumbUIConfig thumbDraggingConfig;
@property (nonatomic) AWEProgressThumbUIConfig thumbStableConfig;
- (id)bigThumbs;
- (void)setBigThumbs:;
- (id)thumbNormalConfig;
- (void)setThumbNormalConfig:;
- (id)thumbActiveConfig;
- (void)setThumbActiveConfig:;
- (id)thumbDraggingConfig;
- (void)setThumbDraggingConfig:;
- (id)thumbStableConfig;
- (void)setThumbStableConfig:;
- (void).cxx_destruct;
@end
