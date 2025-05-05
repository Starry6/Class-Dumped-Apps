@interface MPMovieAccessLog : NSObject
@property (nonatomic) NSData extendedLogData;
@property (nonatomic) Q extendedLogDataStringEncoding;
@property (nonatomic) NSArray events;
- (void).cxx_destruct;
- (id)events;
- (id)copyWithZone:;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;
- (id)_initWithAVItemAccessLog:;
@end
