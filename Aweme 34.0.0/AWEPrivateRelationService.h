@interface AWEPrivateRelationService : HTSService
@property (nonatomic) AWESocialRelationObserver mateObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowNotShow24StorySettingWithUser:;
- (void)setNotShow24Story:user:completion:;
- (void)setNotSee24Story:user:completion:;
- (id)notShow24StoryTextWithUser:;
- (id)notSee24StoryTextWithUser:;
- (id)show24StoryTextWithUser:;
- (id)notShowPostAnd24StoryTextWithUser:;
- (id)notSeePostAnd24StoryTextWithUser:;
- (id)privateRelationDescriptionWithUser:;
- (id)notShow24StoryToastWithUser:error:;
- (id)notSee24StoryToastWithUser:error:;
- (BOOL)enableNotShow24Story;
- (void)setMateObserver:;
- (id)mateObserver;
- (void)p_requestBlockUser:isBlock:source:completion:;
- (id)p_storyTabName;
- (id)init;
- (void).cxx_destruct;
@end
