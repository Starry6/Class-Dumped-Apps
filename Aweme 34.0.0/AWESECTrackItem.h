@interface AWESECTrackItem : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary allParams;
@property (nonatomic) NSDictionary category;
@property (nonatomic) NSDictionary metrics;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q trackerType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
- (void)setExtra:;
- (void)setTrackerType:;
- (unsigned long long)trackerType;
- (id)metrics;
- (id)init;
- (id)category;
- (void)setEventName:;
- (id)extra;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setMetrics:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)title;
- (id)eventName;
- (void)setTitle:;
- (id)allParams;
@end
