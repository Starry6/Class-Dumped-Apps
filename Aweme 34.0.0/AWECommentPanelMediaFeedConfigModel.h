@interface AWECommentPanelMediaFeedConfigModel : NSObject
@property (nonatomic) BOOL isDisableInteraction;
@property (nonatomic) AWECommentMediaFeedInteractionConfig interactionSubConfig;
@property (nonatomic) BOOL isDisableCustomTransition;
@property (nonatomic) NSArray componentInfoArray;
- (void)setComponentInfoArray:;
- (id)componentInfoArray;
- (BOOL)isDisableInteraction;
- (id)interactionSubConfig;
- (BOOL)isDisableCustomTransition;
- (void)setIsDisableInteraction:;
- (void)setInteractionSubConfig:;
- (void)setIsDisableCustomTransition:;
- (void).cxx_destruct;
@end
