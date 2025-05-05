@interface DCAccessibility : NSObject
- (void)postAnnouncement:withSender:priority:;
- (BOOL)needsAccessibilityElements;
+ (id)sharedInstance;
@end
