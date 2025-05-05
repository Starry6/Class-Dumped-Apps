@interface MPRadioRecentStationsGroup : NSObject
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSArray stations;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)localizedTitle;
- (void)setLocalizedTitle:;
- (id)stations;
- (void)setStations:;
+ (BOOL)supportsSecureCoding;
@end
