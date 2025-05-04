@interface AWEClassroomImpl.ClassroomMoreAlert : NSObject
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (id)init;
- (void).cxx_destruct;
@end
