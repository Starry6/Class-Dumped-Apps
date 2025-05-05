@interface WXLocationObject : NSObject
@property (nonatomic) double lng;
@property (nonatomic) double lat;
- (void)setLng:;
- (id)init;
- (double)lat;
- (void)setLat:;
- (double)lng;
+ (id)object;
@end
