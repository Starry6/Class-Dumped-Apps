@interface SSWishlistAddItemsRequest : SSRequest
@property (nonatomic) NSArray items;
@property (nonatomic) NSString caller;
@property (nonatomic) NSString version;
- (id)initWithXPCEncoding:;
- (id)init;
- (id)caller;
- (id)copyXPCEncoding;
- (id)version;
- (id)items;
- (void).cxx_destruct;
- (id)copyQueryStringParameters;
- (id)_convertedValueForValue:;
- (id)initWithItems:caller:version:;
- (void)startWithAddItemsResponseBlock:;
@end
