@interface STLive.LiveUserProfileControllerFactoryImp : NSObject
- (id)profileControllerWithUID:secUID:;
- (id)profileControllerWithUID:secUID:currentUserOpenId:extraTrackParams:;
- (id)init;
@end
