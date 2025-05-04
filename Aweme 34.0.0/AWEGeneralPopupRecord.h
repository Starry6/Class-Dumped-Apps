@interface AWEGeneralPopupRecord : NSObject
@property (nonatomic) NSDate lastShownDate;
@property (nonatomic) q numberOfTimesShown;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)lastShownDate;
- (void)setLastShownDate:;
- (long long)numberOfTimesShown;
- (void)setNumberOfTimesShown:;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:;
@end
