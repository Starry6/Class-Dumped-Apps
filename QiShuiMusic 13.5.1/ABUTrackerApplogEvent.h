@interface ABUTrackerApplogEvent : ABUTrackerEvent
@property (nonatomic) NSData data;
- (id)convertToUploadPackage;
- (id)eventV3CommonParameters:;
- (id)willUpdateParam:;
- (id)data;
- (id)formatter;
- (void).cxx_destruct;
- (void)setData:;
+ (id)abu_ignoreProperties;
+ (id)packageEvents:;
+ (id)trackHeaderParameters;
@end
