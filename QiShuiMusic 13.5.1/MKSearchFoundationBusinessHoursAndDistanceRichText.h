@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText
@property (nonatomic) BOOL businessHoursResolved;
@property (nonatomic) BOOL distanceResolved;
@property (nonatomic) NSString hoursString;
@property (nonatomic) UIColor hoursColor;
- (void).cxx_destruct;
- (BOOL)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:lines:;
- (void)updateFormattedTextForLines:;
- (void)resolveDistanceString:lines:;
- (void)resolveDistanceNotFound;
- (BOOL)isBusinessHoursResolved;
- (void)setBusinessHoursResolved:;
- (BOOL)isDistanceResolved;
- (void)setDistanceResolved:;
- (id)hoursString;
- (void)setHoursString:;
- (id)hoursColor;
- (void)setHoursColor:;
@end
