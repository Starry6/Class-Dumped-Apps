@interface AWEACCAccessibilityImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enableAccessibility:traits:label:;
- (void)setAccessibilityProperty:isAccessibilityElement:;
- (void)postAccessibilityNotification:argument:;
- (BOOL)isVoiceOverOn;
- (void)setAccessibilityProperty:accessibilityValue:;
- (void)setAccessibilityProperty:accessibilityViewIsModal:;
@end
