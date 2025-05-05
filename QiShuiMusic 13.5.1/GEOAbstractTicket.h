@interface GEOAbstractTicket : NSObject
@property (nonatomic) GEOMapServiceTraits traits;
@property (nonatomic) Q cachePolicy;
@property (nonatomic) BOOL cancelled;
- (id)traits;
- (id)initWithTraits:;
- (void)setCachePolicy:;
- (unsigned long long)cachePolicy;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (id)description;
- (void)setThrottlerToken:;
@end
