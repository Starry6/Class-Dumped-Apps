@interface AWEStoryTagComponent : NSObject
@property (nonatomic) AWEStoryTagView storyTagView;
@property (nonatomic) AWEPlayInteractionBaseElement clickDelegate;
@property (nonatomic) NSArray currentActivatedComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (long long)tagWidth;
- (id)storyTagView;
- (void)setStoryTagView:;
- (id)clickDelegate;
- (void)onStoryTagViewClicked:;
- (void)setClickDelegate:;
- (id)currentActivatedComponents;
- (void)setCurrentActivatedComponents:;
- (BOOL)currentTagNeedPlaceHolder;
- (BOOL)shouldShowAlbumTextWithModel:;
- (void)updateSlidesTagWithModel:uiConfigModel:;
- (void)updateSingleImageOriginTextWithUIConfigModel:;
- (void)updateAlbumTextWithModel:uiConfigModel:;
- (void)updateMomentCombinationTagWithModel:uiConfigModel:;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)tagView;
+ (BOOL)needShowWithContext:;
+ (BOOL)enableQuickStory;
@end
