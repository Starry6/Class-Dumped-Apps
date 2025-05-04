@interface AWESlidesTagComponent : NSObject
@property (nonatomic) AWEVideoTypeTagView slidesTagView;
@property (nonatomic) AWEPlayInteractionBaseElement clickDelegate;
@property (nonatomic) NSArray currentActivatedComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tagWidth;
- (id)clickDelegate;
- (void)setClickDelegate:;
- (id)currentActivatedComponents;
- (void)setCurrentActivatedComponents:;
- (BOOL)currentTagNeedPlaceHolder;
- (void)onRichAwemeTagClicked:;
- (id)slidesTagView;
- (void)setSlidesTagView:;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)tagView;
+ (BOOL)needShowWithContext:;
+ (BOOL)needShowSlidesTagViewWithModel:;
+ (void)updateTagViewModel:withAwemeModel:;
@end
