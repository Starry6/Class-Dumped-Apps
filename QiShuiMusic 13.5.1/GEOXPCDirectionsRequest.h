@interface GEOXPCDirectionsRequest : GEOXPCRequest
@property (nonatomic) GEODirectionsRequest directionsRequest;
@property (nonatomic) NSInteger priority;
@property (nonatomic) BOOL useBackgroundURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPriority:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)directionsRequest;
- (void)setDirectionsRequest:;
- (int)priority;
- (BOOL)useBackgroundURL;
- (void)setUseBackgroundURL:;
+ (Class)replyClass;
@end
