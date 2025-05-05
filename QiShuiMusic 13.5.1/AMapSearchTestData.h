@interface AMapSearchTestData : NSObject
+ (id)testDataMapping;
+ (void)addTestDataWithJSONObject:forRequestClass:;
+ (id)dataWithJSONObject:;
+ (id)testDataForRequestClass:;
@end
