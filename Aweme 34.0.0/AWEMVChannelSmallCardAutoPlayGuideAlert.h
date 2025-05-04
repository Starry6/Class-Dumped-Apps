@interface AWEMVChannelSmallCardAutoPlayGuideAlert : NSObject
@property (nonatomic) <AWEMVChannelSmallCardAutoPlayGuideAlertDeleagte> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
