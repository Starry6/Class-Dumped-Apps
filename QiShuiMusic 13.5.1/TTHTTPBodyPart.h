@interface TTHTTPBodyPart : NSObject
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSString boundary;
@property (nonatomic) @ body;
@property (nonatomic) Q bodyContentLength;
@property (nonatomic) BOOL hasInitialBoundary;
@property (nonatomic) BOOL hasFinalBoundary;
- (unsigned long long)bodyContentLength;
- (BOOL)hasFinalBoundary;
- (BOOL)hasInitialBoundary;
- (void)setBodyContentLength:;
- (void)setHasFinalBoundary:;
- (void)setHasInitialBoundary:;
- (id)stringForHeaders_;
- (id)body;
- (void)setHeaders:;
- (void)setBody:;
- (void).cxx_destruct;
- (id)headers;
- (id)getData;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
- (id)boundary;
- (void)setBoundary:;
@end
