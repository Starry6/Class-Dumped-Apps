@interface AWELiteActivityPopupExtraModel : MTLModel
@property (nonatomic) NSArray calendarList;
@property (nonatomic) NSDictionary polarisData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)calendarList;
- (void)setCalendarList:;
- (id)polarisData;
- (void)setPolarisData:;
- (void).cxx_destruct;
+ (id)calendarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
