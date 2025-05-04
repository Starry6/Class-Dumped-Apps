@interface AWEPlayInteractionDescriptionElementActiveInfo : AWEPlayInteractionElementActivateInfo
@property (nonatomic) BOOL descriptionLabelHide;
@property (nonatomic) BOOL adDescriptionLabelHide;
@property (nonatomic) BOOL storyTagViewShow;
@property (nonatomic) BOOL richAwemeTagViewShow;
@property (nonatomic) BOOL mixTagViewShow;
- (void)setDescriptionLabelHide:;
- (void)setAdDescriptionLabelHide:;
- (BOOL)descriptionLabelHide;
- (BOOL)adDescriptionLabelHide;
- (BOOL)storyTagViewShow;
- (BOOL)richAwemeTagViewShow;
- (BOOL)mixTagViewShow;
- (void)setStoryTagViewShow:;
- (void)setRichAwemeTagViewShow:;
- (void)setMixTagViewShow:;
@end
