@interface AVPlayerItemAccessLog : NSObject
@property (nonatomic) Q extendedLogDataStringEncoding;
@property (nonatomic) NSArray events;
- (id)init;
- (void)dealloc;
- (id)events;
- (id)description;
- (id)copyWithZone:;
- (id)_common_init;
- (id)initWithLogArray:;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;
- (id)_accessLogArray;
@end
