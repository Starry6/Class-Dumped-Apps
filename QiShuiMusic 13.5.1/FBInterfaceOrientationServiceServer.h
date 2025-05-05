@interface FBInterfaceOrientationServiceServer : FBSServiceFacility
- (id)init;
- (void)_queue_handleRegisterOrientationInterest:fromClient:;
- (void)noteClientDidConnect:withMessage:;
- (void)_queue_updateInterest:forClient:withMessage:;
- (id)initWithIdentifier:queue:;
- (void)_queue_handleRequestActiveOrientation:fromClient:;
- (id)_prerequisiteMilestones;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:withType:fromClient:;
- (void)noteInterfaceOrientationChanged:animationSettings:direction:;
- (void)noteClientDidDisconnect:;
@end
