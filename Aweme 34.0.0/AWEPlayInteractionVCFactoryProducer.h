@interface AWEPlayInteractionVCFactoryProducer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (Class)storyInteractionFactory;
+ (Class)defaultInteractionFactory;
+ (Class)hotSpotInteractionFactory;
+ (Class)hotSearchDiscussionInteractionFactory;
+ (Class)hotSpotTTArticleInteractionFactory;
+ (Class)specialCardTemplateInteractionFactory;
+ (Class)immersiveInteractionFactory;
@end
