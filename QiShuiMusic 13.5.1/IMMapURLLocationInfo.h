@interface IMMapURLLocationInfo : NSObject
@property (nonatomic) CLLocation location;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString query;
@property (nonatomic) NSString address;
- (id)url;
- (void)setQuery:;
- (void)setAddress:;
- (id)query;
- (void)setUrl:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)address;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)locationInfoFromURL:;
@end
