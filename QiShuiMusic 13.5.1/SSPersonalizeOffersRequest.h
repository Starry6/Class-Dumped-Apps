@interface SSPersonalizeOffersRequest : SSRequest
@property (nonatomic) <SSPersonalizeOffersDelegate> delegate;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithItems:;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:;
- (id)items;
- (void)startWithPersonalizedResponseBlock:;
@end
