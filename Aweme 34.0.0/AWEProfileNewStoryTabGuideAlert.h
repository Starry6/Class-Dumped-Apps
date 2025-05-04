@interface AWEProfileNewStoryTabGuideAlert : NSObject
@property (nonatomic) <AWEProfileStoryTabPopoverDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (id)newStoryTabGuidePopoverHasShownKey;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
