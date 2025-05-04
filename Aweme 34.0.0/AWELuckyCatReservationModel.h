@interface AWELuckyCatReservationModel : MTLModel
@property (nonatomic) NSArray calendarList;
@property (nonatomic) NSNumber toastType;
@property (nonatomic) NSString toastText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toastText;
- (void)setToastText:;
- (id)toastType;
- (void)setToastType:;
- (id)calendarList;
- (void)setCalendarList:;
- (void).cxx_destruct;
+ (id)calendarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
