@interface AWENewStoryTagComponent : NSObject
@property (nonatomic) AWEStoryTagView storyTagView;
@property (nonatomic) AWEPlayInteractionBaseElement clickDelegate;
@property (nonatomic) NSArray currentActivatedComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tagWidth;
- (id)storyTagView;
- (void)setStoryTagView:;
- (void)updateTagForLargeFontAdaptIfNeeded:withFontSize:;
- (void)updateWithCloseFriendsModel:;
- (id)clickDelegate;
- (void)onStoryTagViewClicked:;
- (void)setClickDelegate:;
- (id)currentActivatedComponents;
- (void)setCurrentActivatedComponents:;
- (BOOL)currentTagNeedPlaceHolder;
- (long long)getMomentVisibilityWithModel:;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)tagView;
+ (BOOL)needShowWithContext:;
@end
