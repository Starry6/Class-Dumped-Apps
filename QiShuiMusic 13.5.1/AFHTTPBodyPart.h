@interface AFHTTPBodyPart : NSObject
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSString boundary;
@property (nonatomic) @ body;
@property (nonatomic) Q bodyContentLength;
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) BOOL hasInitialBoundary;
@property (nonatomic) BOOL hasFinalBoundary;
@property (nonatomic) BOOL bytesAvailable;
@property (nonatomic) Q contentLength;
- (unsigned long long)bodyContentLength;
- (BOOL)hasFinalBoundary;
- (BOOL)hasInitialBoundary;
- (long long)readData:intoBuffer:maxLength:;
- (void)setBodyContentLength:;
- (void)setHasFinalBoundary:;
- (void)setHasInitialBoundary:;
- (id)stringForHeaders;
- (BOOL)transitionToNextPhase;
- (id)inputStream;
- (id)init;
- (void)dealloc;
- (BOOL)hasBytesAvailable;
- (id)body;
- (void)setHeaders:;
- (void)setInputStream:;
- (void)setBody:;
- (void).cxx_destruct;
- (unsigned long long)contentLength;
- (id)headers;
- (id)copyWithZone:;
- (long long)read:maxLength:;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
- (id)boundary;
- (void)setBoundary:;
@end
