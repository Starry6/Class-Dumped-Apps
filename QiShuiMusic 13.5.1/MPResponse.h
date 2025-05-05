@interface MPResponse : NSObject
@property (nonatomic) NSArray middleware;
@property (nonatomic) @ builder;
@property (nonatomic) @ request;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chain;
- (id)_stateDumpObject;
- (id)initWithRequest:middleware:;
- (id)request;
- (id)builder;
- (void)setMiddleware:;
- (id)middleware;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)copyWithZone:;
+ (id)builderProtocol;
@end
