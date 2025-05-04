@interface AWELiveUserProfileServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)profileControllerWithUID:secUID:;
- (id)profileControllerWithUID:secUID:extraTrackParams:;
- (void)openProfileExtensionAreaServiceWidgetPageWithEditing:entranceSubType:params:;
@end
