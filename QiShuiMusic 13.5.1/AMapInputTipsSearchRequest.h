@interface AMapInputTipsSearchRequest : AMapSearchObject
@property (nonatomic) NSString keywords;
@property (nonatomic) NSString city;
@property (nonatomic) NSString types;
@property (nonatomic) BOOL cityLimit;
@property (nonatomic) NSString location;
- (BOOL)cityLimit;
- (void)setCityLimit:;
- (id)city;
- (id)keywords;
- (void)setKeywords:;
- (id)init;
- (id)types;
- (void)setTypes:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setCity:;
+ (id)ajo_mapping;
@end
