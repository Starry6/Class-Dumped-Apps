@interface AWEProgressChapterUIConfig : NSObject
@property (nonatomic) AWEProgressUIContainerConfig containerConfig;
@property (nonatomic) AWEProgressUITextConfig defaultTextConfig;
@property (nonatomic) AWEProgressUITextConfig selectedTextConfig;
- (id)containerConfig;
- (void)setContainerConfig:;
- (id)defaultTextConfig;
- (void)setDefaultTextConfig:;
- (id)selectedTextConfig;
- (void)setSelectedTextConfig:;
- (void).cxx_destruct;
@end
