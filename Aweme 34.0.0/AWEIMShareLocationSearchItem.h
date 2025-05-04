@interface AWEIMShareLocationSearchItem : NSObject
@property (nonatomic) NSString locationName;
@property (nonatomic) NSString locationAddress;
@property (nonatomic) AWEIMPoiItem poi;
@property (nonatomic) NSString keyword;
@property (nonatomic) BOOL hasTracked;
- (BOOL)hasTracked;
- (void)setHasTracked:;
- (id)poi;
- (void)setPoi:;
- (id)locationAddress;
- (id)locationName;
- (void).cxx_destruct;
- (void)setLocationName:;
- (id)keyword;
- (void)setKeyword:;
- (void)setLocationAddress:;
@end
