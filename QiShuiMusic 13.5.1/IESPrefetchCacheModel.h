@interface IESPrefetchCacheModel : NSObject
@property (nonatomic) NSString requestDescription;
@property (nonatomic) double timeInterval;
@property (nonatomic) double expires;
@property (nonatomic) @ data;
- (id)jsonSerializationDictionary;
- (BOOL)hasExpired;
- (id)data;
- (id)initWithDictionary:;
- (double)expires;
- (void)setTimeInterval:;
- (double)timeInterval;
- (void).cxx_destruct;
- (void)setExpires:;
- (void)setData:;
- (id)requestDescription;
- (void)setRequestDescription:;
+ (id)modelWithData:timeInterval:expires:;
@end
