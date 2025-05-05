@interface FLTelemetryAnalyticsController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)captureCurrentState:;
- (void)captureActionForItem:withEvent:source:;
- (void)captureItemView:;
- (void)_captureItem:event:source:;
- (void)captureItemRemoval:;
- (void)captureItemAddition:;
@end
