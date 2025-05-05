@interface SBSRemoteContentPreferences : NSObject
- (id)init;
- (long long)backgroundStyle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)dateTimeStyle;
- (id)initWithConfiguration:;
- (BOOL)isEqual:;
- (long long)homeGestureMode;
- (long long)preferredNotificationListMode;
- (BOOL)reducesWhitePoint;
- (BOOL)suppressesNotifications;
- (BOOL)suppressesBottomEdgeContent;
- (BOOL)dismissesOnTap;
- (BOOL)prefersInlinePresentation;
+ (BOOL)supportsSecureCoding;
@end
