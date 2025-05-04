@interface AWEPadCommentPanelAdapter : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (BOOL)enablePadCommentPanel:;
- (BOOL)isShowing;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (BOOL)Enable;
@end
