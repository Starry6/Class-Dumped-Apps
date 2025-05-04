@interface AWEPlayInteractionPreloadViewController : AWEPlayInteractionViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)silentUpdate;
- (BOOL)isRichContentWithAwemeModel:referString:;
- (id)initWithModel:referString:;
- (void)configWithModelBeforeUpdate;
- (void)hideInteractionElementIfNeeded;
- (void)hideLeftInteractionIfNeeded;
- (void)hideRightInteractionIfNeeded;
- (void)hideBottomInteractionIfNeeded;
@end
