@interface AWEStudioServiceContainerDYAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)editorTemplateImplementation;
- (id)albumEditorTemplateImplementation;
- (id)richTextEditorTemplateImplementation;
- (id)birthdayPostEditorTemplateImplementation;
- (id)resourceBundleImplementation;
- (id)editBarSortSourceImplementation:isFromIM:supportEditPublish:;
- (id)editBarItemResourceConfigManager:isNewReplaceMusicStyle:enableStoryStyle:supportEditPublish:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
