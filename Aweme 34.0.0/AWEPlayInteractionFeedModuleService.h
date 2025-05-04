@interface AWEPlayInteractionFeedModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createInteractionProgressController;
- (id)getFeedProgressWrapperObjectWithBlock:;
@end
