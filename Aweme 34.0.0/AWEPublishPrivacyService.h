@interface AWEPublishPrivacyService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)privacyStatusWithPublishModel:;
- (id)privacyStatusFor24StoryWithPublishModel:;
- (void)configPrivacyModelWithPublishViewModel:;
- (void)resetPrivacyTypeForStoryIfNeeded:;
- (BOOL)hasEditWithCurrentSnap:snap:;
@end
