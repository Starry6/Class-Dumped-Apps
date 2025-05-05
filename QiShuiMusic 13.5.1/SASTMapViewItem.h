@interface SASTMapViewItem : AceObject
@property (nonatomic) <SASTTemplateAction> action;
@property (nonatomic) NSString extSessionGuid;
@property (nonatomic) NSDate extSessionGuidCreatedTimestamp;
@property (nonatomic) SALocation location;
@property (nonatomic) NSNumber zoomLevel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomLevel;
- (void)setZoomLevel:;
- (id)groupIdentifier;
- (id)action;
- (void)setAction:;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (id)extSessionGuid;
- (void)setExtSessionGuid:;
- (id)extSessionGuidCreatedTimestamp;
- (void)setExtSessionGuidCreatedTimestamp:;
+ (id)mapViewItem;
+ (id)mapViewItemWithDictionary:context:;
@end
