@interface UISSlotMachine : NSObject
@property (nonatomic) NSSet allTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allTags;
- (void)removeContentsForTag:;
- (void)getRemoteContentForLayerContextWithId:style:tag:reply:;
- (id)initWithSlotDrawer:options:;
- (id)remoteContentForLayerContextWithId:style:tag:;
- (void).cxx_destruct;
- (void)removeContentForStyle:tag:;
+ (id)allowedLocalizations;
@end
