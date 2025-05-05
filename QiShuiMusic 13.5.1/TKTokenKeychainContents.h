@interface TKTokenKeychainContents : NSObject
@property (nonatomic) TKTokenConfiguration configuration;
@property (nonatomic) NSString tokenID;
@property (nonatomic) NSDictionary keys;
@property (nonatomic) NSDictionary certificates;
@property (nonatomic) NSArray items;
- (id)certificates;
- (id)keys;
- (id)items;
- (id)tokenID;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (id)initWithTokenID:;
- (id)keyForObjectID:error:;
- (id)certificateForObjectID:error:;
- (void)fillWithItems:;
- (id)certificateForKey:;
@end
