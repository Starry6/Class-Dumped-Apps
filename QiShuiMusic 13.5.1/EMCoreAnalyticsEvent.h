@interface EMCoreAnalyticsEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary data;
- (id)data;
- (void).cxx_destruct;
- (id)name;
- (id)initWithEventName:collectionData:;
@end
